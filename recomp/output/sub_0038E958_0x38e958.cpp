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

// Function: sub_0038E958
// Address: 0x38e958 - 0x38ea40
void sub_0038E958_0x38e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E958_0x38e958");
#endif

    switch (ctx->pc) {
        case 0x38e970u: goto label_38e970;
        case 0x38e980u: goto label_38e980;
        case 0x38e9a4u: goto label_38e9a4;
        case 0x38e9b0u: goto label_38e9b0;
        case 0x38e9c0u: goto label_38e9c0;
        case 0x38e9e8u: goto label_38e9e8;
        case 0x38e9f4u: goto label_38e9f4;
        case 0x38ea08u: goto label_38ea08;
        case 0x38ea14u: goto label_38ea14;
        default: break;
    }

    ctx->pc = 0x38e958u;

    // 0x38e958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e95c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38e964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e968: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E968u;
    SET_GPR_U32(ctx, 31, 0x38E970u);
    ctx->pc = 0x38E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E968u;
    // 0x38e96c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E968u, 0x38E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E970u;
label_38e970:
    // 0x38e970: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38E970u;
    {
        const bool branch_taken_0x38e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E970u;
        // 0x38e974: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e970) {
            ctx->pc = 0x38E9A4u;
            goto label_38e9a4;
        }
    }
    ctx->pc = 0x38E978u;
    // 0x38e978: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E978u;
    SET_GPR_U32(ctx, 31, 0x38E980u);
    ctx->pc = 0x38E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E978u;
    // 0x38e97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E978u, 0x38E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E980u;
label_38e980:
    // 0x38e980: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e984: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x38e984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x38e988: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e990: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38e990u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e998: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x38e998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x38e99c: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E99Cu;
    SET_GPR_U32(ctx, 31, 0x38E9A4u);
    ctx->pc = 0x38E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E99Cu;
    // 0x38e9a0: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E99Cu, 0x38E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9A4u;
label_38e9a4:
    // 0x38e9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e9a8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E9A8u;
    SET_GPR_U32(ctx, 31, 0x38E9B0u);
    ctx->pc = 0x38E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9A8u;
    // 0x38e9ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E9A8u, 0x38E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9B0u;
label_38e9b0:
    // 0x38e9b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38E9B0u;
    {
        const bool branch_taken_0x38e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9B0u;
        // 0x38e9b4: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9b0) {
            ctx->pc = 0x38E9E8u;
            goto label_38e9e8;
        }
    }
    ctx->pc = 0x38E9B8u;
    // 0x38e9b8: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E9B8u;
    SET_GPR_U32(ctx, 31, 0x38E9C0u);
    ctx->pc = 0x38E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9B8u;
    // 0x38e9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E9B8u, 0x38E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9C0u;
label_38e9c0:
    // 0x38e9c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e9c4: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x38e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x38e9c8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e9cc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x38e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x38e9d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38e9d0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38e9d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e9d8: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x38e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x38e9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e9e0: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E9E0u;
    SET_GPR_U32(ctx, 31, 0x38E9E8u);
    ctx->pc = 0x38E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9E0u;
    // 0x38e9e4: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E9E0u, 0x38E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9E8u;
label_38e9e8:
    // 0x38e9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e9ec: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E9ECu;
    SET_GPR_U32(ctx, 31, 0x38E9F4u);
    ctx->pc = 0x38E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9ECu;
    // 0x38e9f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E9ECu, 0x38E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9F4u;
label_38e9f4:
    // 0x38e9f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E9F4u;
    {
        const bool branch_taken_0x38e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9F4u;
        // 0x38e9f8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9f4) {
            ctx->pc = 0x38EA08u;
            goto label_38ea08;
        }
    }
    ctx->pc = 0x38E9FCu;
    // 0x38e9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ea00: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38EA00u;
    SET_GPR_U32(ctx, 31, 0x38EA08u);
    ctx->pc = 0x38EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA00u;
    // 0x38ea04: 0x24a59668  addiu       $a1, $a1, -0x6998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38EA00u, 0x38EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA08u;
label_38ea08:
    // 0x38ea08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ea0c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EA0Cu;
    SET_GPR_U32(ctx, 31, 0x38EA14u);
    ctx->pc = 0x38EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA0Cu;
    // 0x38ea10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EA0Cu, 0x38EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA14u;
label_38ea14:
    // 0x38ea14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38EA14u;
    {
        const bool branch_taken_0x38ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA14u;
        // 0x38ea18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea14) {
            ctx->pc = 0x38EA34u;
            goto label_38ea34;
        }
    }
    ctx->pc = 0x38EA1Cu;
    // 0x38ea1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ea20: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38ea24: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x38ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x38ea28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ea28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ea2c: 0x80e28f8  j           func_38A3E0
    ctx->pc = 0x38EA2Cu;
    ctx->pc = 0x38EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA2Cu;
    // 0x38ea30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    sub_0038A3E0_0x38a3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x38EA34u;
label_38ea34:
    // 0x38ea34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ea34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x38EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA38u;
        // 0x38ea3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EA40u;
}
