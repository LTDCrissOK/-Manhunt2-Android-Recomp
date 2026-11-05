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

// Function: sub_00136E68
// Address: 0x136e68 - 0x136f50
void sub_00136E68_0x136e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E68_0x136e68");
#endif

    switch (ctx->pc) {
        case 0x136e9cu: goto label_136e9c;
        case 0x136eacu: goto label_136eac;
        case 0x136ec4u: goto label_136ec4;
        case 0x136ed0u: goto label_136ed0;
        case 0x136edcu: goto label_136edc;
        case 0x136ee4u: goto label_136ee4;
        case 0x136ef8u: goto label_136ef8;
        case 0x136f04u: goto label_136f04;
        case 0x136f10u: goto label_136f10;
        case 0x136f30u: goto label_136f30;
        default: break;
    }

    ctx->pc = 0x136e68u;

    // 0x136e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136e6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136e70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136e74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136e7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x136e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136e84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x136e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136e8c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x136e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136e94: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x136E94u;
    SET_GPR_U32(ctx, 31, 0x136E9Cu);
    ctx->pc = 0x136E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E94u;
    // 0x136e98: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x136E94u, 0x136E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E9Cu;
label_136e9c:
    // 0x136e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ea4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x136EA4u;
    SET_GPR_U32(ctx, 31, 0x136EACu);
    ctx->pc = 0x136EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EA4u;
    // 0x136ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x136EA4u, 0x136EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EACu;
label_136eac:
    // 0x136eac: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x136eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x136eb0: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136EB0u;
    {
        const bool branch_taken_0x136eb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x136eb0) {
            ctx->pc = 0x136EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136EB0u;
            // 0x136eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136EC8u;
            goto label_136ec8;
        }
    }
    ctx->pc = 0x136EB8u;
    // 0x136eb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ebc: 0xc046138  jal         func_1184E0
    ctx->pc = 0x136EBCu;
    SET_GPR_U32(ctx, 31, 0x136EC4u);
    ctx->pc = 0x136EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EBCu;
    // 0x136ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x136EBCu, 0x136EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EC4u;
label_136ec4:
    // 0x136ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136ec8:
    // 0x136ec8: 0xc046154  jal         func_118550
    ctx->pc = 0x136EC8u;
    SET_GPR_U32(ctx, 31, 0x136ED0u);
    ctx->pc = 0x136ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EC8u;
    // 0x136ecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x136EC8u, 0x136ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ED0u;
label_136ed0:
    // 0x136ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ed4: 0xc046256  jal         func_118958
    ctx->pc = 0x136ED4u;
    SET_GPR_U32(ctx, 31, 0x136EDCu);
    ctx->pc = 0x136ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136ED4u;
    // 0x136ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x136ED4u, 0x136EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EDCu;
label_136edc:
    // 0x136edc: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x136EDCu;
    SET_GPR_U32(ctx, 31, 0x136EE4u);
    ctx->pc = 0x136EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EDCu;
    // 0x136ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x136EDCu, 0x136EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EE4u;
label_136ee4:
    // 0x136ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ee8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ef0: 0xc045612  jal         func_115848
    ctx->pc = 0x136EF0u;
    SET_GPR_U32(ctx, 31, 0x136EF8u);
    ctx->pc = 0x136EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EF0u;
    // 0x136ef4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x136EF0u, 0x136EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EF8u;
label_136ef8:
    // 0x136ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136efc: 0xc045668  jal         func_1159A0
    ctx->pc = 0x136EFCu;
    SET_GPR_U32(ctx, 31, 0x136F04u);
    ctx->pc = 0x136F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EFCu;
    // 0x136f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x136EFCu, 0x136F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F04u;
label_136f04:
    // 0x136f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f08: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x136F08u;
    SET_GPR_U32(ctx, 31, 0x136F10u);
    ctx->pc = 0x136F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F08u;
    // 0x136f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x136F08u, 0x136F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F10u;
label_136f10:
    // 0x136f10: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x136f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x136f14: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x136f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x136f18: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x136f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x136f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136f24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f28: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x136F28u;
    SET_GPR_U32(ctx, 31, 0x136F30u);
    ctx->pc = 0x136F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F28u;
    // 0x136f2c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x136F28u, 0x136F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F30u;
label_136f30:
    // 0x136f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136f38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136f3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136f40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136f40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136f48: 0x3e00008  jr          $ra
    ctx->pc = 0x136F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F48u;
        // 0x136f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F50u;
}
