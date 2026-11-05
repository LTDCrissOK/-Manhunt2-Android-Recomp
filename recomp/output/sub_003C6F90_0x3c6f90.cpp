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

// Function: sub_003C6F90
// Address: 0x3c6f90 - 0x3c7058
void sub_003C6F90_0x3c6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6F90_0x3c6f90");
#endif

    switch (ctx->pc) {
        case 0x3c6fdcu: goto label_3c6fdc;
        default: break;
    }

    ctx->pc = 0x3c6f90u;

    // 0x3c6f90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c6f94: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c6f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3c6f98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3c6f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c6f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6fa0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c6fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c6fa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c6fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c6fa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6FA8u;
    {
        const bool branch_taken_0x3c6fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FA8u;
        // 0x3c6fac: 0x26030043  addiu       $v1, $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fa8) {
            ctx->pc = 0x3C6FC4u;
            goto label_3c6fc4;
        }
    }
    ctx->pc = 0x3C6FB0u;
    // 0x3c6fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6fb4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3c6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x3c6fb8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3c6fbc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C6FBCu;
    {
        const bool branch_taken_0x3c6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FBCu;
        // 0x3c6fc0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fbc) {
            ctx->pc = 0x3C7044u;
            goto label_3c7044;
        }
    }
    ctx->pc = 0x3C6FC4u;
label_3c6fc4:
    // 0x3c6fc4: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3c6fc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3c6fc8: 0x4a20014  bltzl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C6FC8u;
    {
        const bool branch_taken_0x3c6fc8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3c6fc8) {
            ctx->pc = 0x3C6FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6FC8u;
            // 0x3c6fcc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C701Cu;
            goto label_3c701c;
        }
    }
    ctx->pc = 0x3C6FD0u;
    // 0x3c6fd0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c6fd4: 0xc0f24c0  jal         func_3C9300
    ctx->pc = 0x3C6FD4u;
    SET_GPR_U32(ctx, 31, 0x3C6FDCu);
    ctx->pc = 0x3C6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6FD4u;
    // 0x3c6fd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9300u, 0x3C6FD4u, 0x3C6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6FDCu;
label_3c6fdc:
    // 0x3c6fdc: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C6FDCu;
    {
        const bool branch_taken_0x3c6fdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FDCu;
        // 0x3c6fe0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fdc) {
            ctx->pc = 0x3C7018u;
            goto label_3c7018;
        }
    }
    ctx->pc = 0x3C6FE4u;
    // 0x3c6fe4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3c6fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3c6fe8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3c6fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3c6fec: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3C6FECu;
    {
        const bool branch_taken_0x3c6fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c6fec) {
            ctx->pc = 0x3C6FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6FECu;
            // 0x3c6ff0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C701Cu;
            goto label_3c701c;
        }
    }
    ctx->pc = 0x3C6FF4u;
    // 0x3c6ff4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3c6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3c6ff8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3c6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3c6ffc: 0x24427140  addiu       $v0, $v0, 0x7140
    ctx->pc = 0x3c6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28992));
    // 0x3c7000: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7000u;
    {
        const bool branch_taken_0x3c7000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7000u;
        // 0x3c7004: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7000) {
            ctx->pc = 0x3C701Cu;
            goto label_3c701c;
        }
    }
    ctx->pc = 0x3C7008u;
    // 0x3c7008: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3c7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3c700c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x3c700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x3c7010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7010u;
    {
        const bool branch_taken_0x3c7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7010u;
        // 0x3c7014: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7010) {
            ctx->pc = 0x3C7020u;
            goto label_3c7020;
        }
    }
    ctx->pc = 0x3C7018u;
label_3c7018:
    // 0x3c7018: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c7018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3c701c:
    // 0x3c701c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3c701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3c7020:
    // 0x3c7020: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c7020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7024: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c7024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c7028: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x3c7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x3c702c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7030: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x3c7030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x3c7034: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3c7034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3c7038: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3c7038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3c703c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c703cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7040: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3c7040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3c7044:
    // 0x3c7044: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c7044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c7048: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c7048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c704c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C704Cu;
        // 0x3c7050: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7054u;
    // 0x3c7054: 0x0  nop
    ctx->pc = 0x3c7054u;
    // NOP
    ctx->pc = 0x3c7058u;
}
