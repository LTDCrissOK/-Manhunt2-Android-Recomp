#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8278
// Address: 0x2b8278 - 0x2b8308
void sub_002B8278_0x2b8278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8278_0x2b8278");
#endif

    switch (ctx->pc) {
        case 0x2b8298u: goto label_2b8298;
        case 0x2b82a0u: goto label_2b82a0;
        case 0x2b82d4u: goto label_2b82d4;
        case 0x2b82e4u: goto label_2b82e4;
        default: break;
    }

    ctx->pc = 0x2b8278u;

    // 0x2b8278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b827c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b828c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8290: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8290u;
    SET_GPR_U32(ctx, 31, 0x2B8298u);
    ctx->pc = 0x2B8294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8290u;
    // 0x2b8294: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8290u, 0x2B8298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8298u;
label_2b8298:
    // 0x2b8298: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8298u;
    SET_GPR_U32(ctx, 31, 0x2B82A0u);
    ctx->pc = 0x2B829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8298u;
    // 0x2b829c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8298u, 0x2B82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82A0u;
label_2b82a0:
    // 0x2b82a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b82a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b82a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b82a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B82A8u;
    {
        const bool branch_taken_0x2b82a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82A8u;
        // 0x2b82ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82a8) {
            ctx->pc = 0x2B82CCu;
            goto label_2b82cc;
        }
    }
    ctx->pc = 0x2B82B0u;
    // 0x2b82b0: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b82b4: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b82b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b82b8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b82bc: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b82bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b82c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b82c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B82C4u;
    {
        const bool branch_taken_0x2b82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82C4u;
        // 0x2b82c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82c4) {
            ctx->pc = 0x2B82F0u;
            goto label_2b82f0;
        }
    }
    ctx->pc = 0x2B82CCu;
label_2b82cc:
    // 0x2b82cc: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B82CCu;
    SET_GPR_U32(ctx, 31, 0x2B82D4u);
    ctx->pc = 0x2B82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B82CCu;
    // 0x2b82d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B82CCu, 0x2B82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82D4u;
label_2b82d4:
    // 0x2b82d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B82D4u;
    {
        const bool branch_taken_0x2b82d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82d4) {
            ctx->pc = 0x2B82D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82D4u;
            // 0x2b82d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82F4u;
            goto label_2b82f4;
        }
    }
    ctx->pc = 0x2B82DCu;
    // 0x2b82dc: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B82DCu;
    SET_GPR_U32(ctx, 31, 0x2B82E4u);
    ctx->pc = 0x2B82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B82DCu;
    // 0x2b82e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B82DCu, 0x2B82E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82E4u;
label_2b82e4:
    // 0x2b82e4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2b82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b82e8: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b82ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b82f0:
    // 0x2b82f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b82f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b82f4:
    // 0x2b82f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b82f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b82f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b82f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b82fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B82FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82FCu;
        // 0x2b8300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B82FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8304u;
    // 0x2b8304: 0x0  nop
    ctx->pc = 0x2b8304u;
    // NOP
    ctx->pc = 0x2b8308u;
}
