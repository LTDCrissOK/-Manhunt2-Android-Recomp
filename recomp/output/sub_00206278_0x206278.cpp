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

// Function: sub_00206278
// Address: 0x206278 - 0x2062d8
void sub_00206278_0x206278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206278_0x206278");
#endif

    switch (ctx->pc) {
        case 0x2062a0u: goto label_2062a0;
        case 0x2062acu: goto label_2062ac;
        case 0x2062c0u: goto label_2062c0;
        default: break;
    }

    ctx->pc = 0x206278u;

    // 0x206278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20627c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20628c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x206290: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206290u;
    {
        const bool branch_taken_0x206290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x206294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206290u;
        // 0x206294: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206290) {
            ctx->pc = 0x2062A0u;
            goto label_2062a0;
        }
    }
    ctx->pc = 0x206298u;
    // 0x206298: 0xc082464  jal         func_209190
    ctx->pc = 0x206298u;
    SET_GPR_U32(ctx, 31, 0x2062A0u);
    ctx->pc = 0x20629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206298u;
    // 0x20629c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209190u, 0x206298u, 0x2062A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062A0u;
label_2062a0:
    // 0x2062a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2062a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2062A4u;
    SET_GPR_U32(ctx, 31, 0x2062ACu);
    ctx->pc = 0x2062A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062A4u;
    // 0x2062a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2062A4u, 0x2062ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062ACu;
label_2062ac:
    // 0x2062ac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2062acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2062b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2062B0u;
    {
        const bool branch_taken_0x2062b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062b0) {
            ctx->pc = 0x2062B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062B0u;
            // 0x2062b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2062C4u;
            goto label_2062c4;
        }
    }
    ctx->pc = 0x2062B8u;
    // 0x2062b8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2062B8u;
    SET_GPR_U32(ctx, 31, 0x2062C0u);
    ctx->pc = 0x2062BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062B8u;
    // 0x2062bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2062B8u, 0x2062C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062C0u;
label_2062c0:
    // 0x2062c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2062c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2062c4:
    // 0x2062c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2062c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2062cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2062CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062CCu;
        // 0x2062d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2062CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2062D4u;
    // 0x2062d4: 0x0  nop
    ctx->pc = 0x2062d4u;
    // NOP
    ctx->pc = 0x2062d8u;
}
