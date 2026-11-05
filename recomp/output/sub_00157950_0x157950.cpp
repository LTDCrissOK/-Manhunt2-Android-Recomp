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

// Function: sub_00157950
// Address: 0x157950 - 0x157a00
void sub_00157950_0x157950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157950_0x157950");
#endif

    switch (ctx->pc) {
        case 0x15798cu: goto label_15798c;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579e4u: goto label_1579e4;
        default: break;
    }

    ctx->pc = 0x157950u;

    // 0x157950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157954: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x157954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x157958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15795c: 0x24420c18  addiu       $v0, $v0, 0xC18
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3096));
    // 0x157960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15796c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15796cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x157970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157974: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x157974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x157978: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x15797c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15797Cu;
    {
        const bool branch_taken_0x15797c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15797c) {
            ctx->pc = 0x15798Cu;
            goto label_15798c;
        }
    }
    ctx->pc = 0x157984u;
    // 0x157984: 0xc055e96  jal         func_157A58
    ctx->pc = 0x157984u;
    SET_GPR_U32(ctx, 31, 0x15798Cu);
    ctx->pc = 0x157A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157A58u, 0x157984u, 0x15798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15798Cu;
label_15798c:
    // 0x15798c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x15798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x157990: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x157990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x157994: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x157998: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x157998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15799c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1579a0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1579A0u;
    {
        const bool branch_taken_0x1579a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579A0u;
        // 0x1579a4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579a0) {
            ctx->pc = 0x1579D0u;
            goto label_1579d0;
        }
    }
    ctx->pc = 0x1579A8u;
    // 0x1579a8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1579a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1579ac: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1579ACu;
    {
        const bool branch_taken_0x1579ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1579ac) {
            ctx->pc = 0x1579B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1579ACu;
            // 0x1579b0: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1579D4u;
            goto label_1579d4;
        }
    }
    ctx->pc = 0x1579B4u;
    // 0x1579b4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1579b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1579b8:
    // 0x1579b8: 0x0  nop
    ctx->pc = 0x1579b8u;
    // NOP
    // 0x1579bc: 0x0  nop
    ctx->pc = 0x1579bcu;
    // NOP
    // 0x1579c0: 0x0  nop
    ctx->pc = 0x1579c0u;
    // NOP
    // 0x1579c4: 0x0  nop
    ctx->pc = 0x1579c4u;
    // NOP
    // 0x1579c8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1579C8u;
    {
        const bool branch_taken_0x1579c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1579c8) {
            ctx->pc = 0x1579CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1579C8u;
            // 0x1579cc: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1579B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1579b8;
        }
    }
    ctx->pc = 0x1579D0u;
label_1579d0:
    // 0x1579d0: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x1579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_1579d4:
    // 0x1579d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1579D4u;
    {
        const bool branch_taken_0x1579d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579D4u;
        // 0x1579d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579d4) {
            ctx->pc = 0x1579E4u;
            goto label_1579e4;
        }
    }
    ctx->pc = 0x1579DCu;
    // 0x1579dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1579DCu;
    SET_GPR_U32(ctx, 31, 0x1579E4u);
    ctx->pc = 0x1579E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579DCu;
    // 0x1579e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1579DCu, 0x1579E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579E4u;
label_1579e4:
    // 0x1579e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1579e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1579ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1579ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1579f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1579f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1579f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1579F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1579F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579F4u;
        // 0x1579f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1579F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1579FCu;
    // 0x1579fc: 0x0  nop
    ctx->pc = 0x1579fcu;
    // NOP
    ctx->pc = 0x157a00u;
}
