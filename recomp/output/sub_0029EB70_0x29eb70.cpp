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

// Function: sub_0029EB70
// Address: 0x29eb70 - 0x29ed80
void sub_0029EB70_0x29eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EB70_0x29eb70");
#endif

    switch (ctx->pc) {
        case 0x29eb70u: goto label_29eb70;
        case 0x29eb74u: goto label_29eb74;
        case 0x29eb78u: goto label_29eb78;
        case 0x29eb7cu: goto label_29eb7c;
        case 0x29eb80u: goto label_29eb80;
        case 0x29eb84u: goto label_29eb84;
        case 0x29eb88u: goto label_29eb88;
        case 0x29eb8cu: goto label_29eb8c;
        case 0x29eb90u: goto label_29eb90;
        case 0x29eb94u: goto label_29eb94;
        case 0x29eb98u: goto label_29eb98;
        case 0x29eb9cu: goto label_29eb9c;
        case 0x29eba0u: goto label_29eba0;
        case 0x29eba4u: goto label_29eba4;
        case 0x29eba8u: goto label_29eba8;
        case 0x29ebacu: goto label_29ebac;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebb4u: goto label_29ebb4;
        case 0x29ebb8u: goto label_29ebb8;
        case 0x29ebbcu: goto label_29ebbc;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebc4u: goto label_29ebc4;
        case 0x29ebc8u: goto label_29ebc8;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebd8u: goto label_29ebd8;
        case 0x29ebdcu: goto label_29ebdc;
        case 0x29ebe0u: goto label_29ebe0;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebe8u: goto label_29ebe8;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf4u: goto label_29ebf4;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ebfcu: goto label_29ebfc;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec04u: goto label_29ec04;
        case 0x29ec08u: goto label_29ec08;
        case 0x29ec0cu: goto label_29ec0c;
        case 0x29ec10u: goto label_29ec10;
        case 0x29ec14u: goto label_29ec14;
        case 0x29ec18u: goto label_29ec18;
        case 0x29ec1cu: goto label_29ec1c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ec24u: goto label_29ec24;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec2cu: goto label_29ec2c;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec34u: goto label_29ec34;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec44u: goto label_29ec44;
        case 0x29ec48u: goto label_29ec48;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec50u: goto label_29ec50;
        case 0x29ec54u: goto label_29ec54;
        case 0x29ec58u: goto label_29ec58;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29ec60u: goto label_29ec60;
        case 0x29ec64u: goto label_29ec64;
        case 0x29ec68u: goto label_29ec68;
        case 0x29ec6cu: goto label_29ec6c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec78u: goto label_29ec78;
        case 0x29ec7cu: goto label_29ec7c;
        case 0x29ec80u: goto label_29ec80;
        case 0x29ec84u: goto label_29ec84;
        case 0x29ec88u: goto label_29ec88;
        case 0x29ec8cu: goto label_29ec8c;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ec94u: goto label_29ec94;
        case 0x29ec98u: goto label_29ec98;
        case 0x29ec9cu: goto label_29ec9c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29eca4u: goto label_29eca4;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecacu: goto label_29ecac;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecb4u: goto label_29ecb4;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecc8u: goto label_29ecc8;
        case 0x29ecccu: goto label_29eccc;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecd8u: goto label_29ecd8;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece0u: goto label_29ece0;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ece8u: goto label_29ece8;
        case 0x29ececu: goto label_29ecec;
        case 0x29ecf0u: goto label_29ecf0;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ecf8u: goto label_29ecf8;
        case 0x29ecfcu: goto label_29ecfc;
        case 0x29ed00u: goto label_29ed00;
        case 0x29ed04u: goto label_29ed04;
        case 0x29ed08u: goto label_29ed08;
        case 0x29ed0cu: goto label_29ed0c;
        case 0x29ed10u: goto label_29ed10;
        case 0x29ed14u: goto label_29ed14;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed1cu: goto label_29ed1c;
        case 0x29ed20u: goto label_29ed20;
        case 0x29ed24u: goto label_29ed24;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed2cu: goto label_29ed2c;
        case 0x29ed30u: goto label_29ed30;
        case 0x29ed34u: goto label_29ed34;
        case 0x29ed38u: goto label_29ed38;
        case 0x29ed3cu: goto label_29ed3c;
        case 0x29ed40u: goto label_29ed40;
        case 0x29ed44u: goto label_29ed44;
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed4cu: goto label_29ed4c;
        case 0x29ed50u: goto label_29ed50;
        case 0x29ed54u: goto label_29ed54;
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed60u: goto label_29ed60;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed68u: goto label_29ed68;
        case 0x29ed6cu: goto label_29ed6c;
        case 0x29ed70u: goto label_29ed70;
        case 0x29ed74u: goto label_29ed74;
        case 0x29ed78u: goto label_29ed78;
        case 0x29ed7cu: goto label_29ed7c;
        default: break;
    }

    ctx->pc = 0x29eb70u;

label_29eb70:
    // 0x29eb70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29eb74:
    // 0x29eb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29eb78:
    // 0x29eb78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29eb7c:
    // 0x29eb7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29eb80:
    // 0x29eb80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29eb84:
    // 0x29eb84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29eb88:
    // 0x29eb88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29eb8c:
    // 0x29eb8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29eb90:
    // 0x29eb90: 0xc0a7bd4  jal         func_29EF50
label_29eb94:
    if (ctx->pc == 0x29EB94u) {
        ctx->pc = 0x29EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB90u;
        // 0x29eb94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB98u;
        goto label_29eb98;
    }
    ctx->pc = 0x29EB90u;
    SET_GPR_U32(ctx, 31, 0x29EB98u);
    ctx->pc = 0x29EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB90u;
    // 0x29eb94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EF50u, 0x29EB90u, 0x29EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB98u;
label_29eb98:
    // 0x29eb98: 0xc0a7be8  jal         func_29EFA0
label_29eb9c:
    if (ctx->pc == 0x29EB9Cu) {
        ctx->pc = 0x29EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB98u;
        // 0x29eb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBA0u;
        goto label_29eba0;
    }
    ctx->pc = 0x29EB98u;
    SET_GPR_U32(ctx, 31, 0x29EBA0u);
    ctx->pc = 0x29EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB98u;
    // 0x29eb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EFA0u, 0x29EB98u, 0x29EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBA0u;
label_29eba0:
    // 0x29eba0: 0xc0a1ebe  jal         func_287AF8
label_29eba4:
    if (ctx->pc == 0x29EBA4u) {
        ctx->pc = 0x29EBA8u;
        goto label_29eba8;
    }
    ctx->pc = 0x29EBA0u;
    SET_GPR_U32(ctx, 31, 0x29EBA8u);
    ctx->pc = 0x287AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287AF8u, 0x29EBA0u, 0x29EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBA8u;
label_29eba8:
    // 0x29eba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29ebac:
    if (ctx->pc == 0x29EBACu) {
        ctx->pc = 0x29EBB0u;
        goto label_29ebb0;
    }
    ctx->pc = 0x29EBA8u;
    {
        const bool branch_taken_0x29eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eba8) {
            ctx->pc = 0x29EBC8u;
            goto label_29ebc8;
        }
    }
    ctx->pc = 0x29EBB0u;
label_29ebb0:
    // 0x29ebb0: 0xc0a7728  jal         func_29DCA0
label_29ebb4:
    if (ctx->pc == 0x29EBB4u) {
        ctx->pc = 0x29EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBB0u;
        // 0x29ebb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBB8u;
        goto label_29ebb8;
    }
    ctx->pc = 0x29EBB0u;
    SET_GPR_U32(ctx, 31, 0x29EBB8u);
    ctx->pc = 0x29EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBB0u;
    // 0x29ebb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DCA0u, 0x29EBB0u, 0x29EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBB8u;
label_29ebb8:
    // 0x29ebb8: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29ebbc:
    // 0x29ebbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ebc0:
    // 0x29ebc0: 0xc0a7c20  jal         func_29F080
label_29ebc4:
    if (ctx->pc == 0x29EBC4u) {
        ctx->pc = 0x29EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBC0u;
        // 0x29ebc4: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBC8u;
        goto label_29ebc8;
    }
    ctx->pc = 0x29EBC0u;
    SET_GPR_U32(ctx, 31, 0x29EBC8u);
    ctx->pc = 0x29EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBC0u;
    // 0x29ebc4: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29EBC0u, 0x29EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBC8u;
label_29ebc8:
    // 0x29ebc8: 0xc0a1e6e  jal         func_2879B8
label_29ebcc:
    if (ctx->pc == 0x29EBCCu) {
        ctx->pc = 0x29EBD0u;
        goto label_29ebd0;
    }
    ctx->pc = 0x29EBC8u;
    SET_GPR_U32(ctx, 31, 0x29EBD0u);
    ctx->pc = 0x2879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2879B8u, 0x29EBC8u, 0x29EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBD0u;
label_29ebd0:
    // 0x29ebd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29ebd4:
    if (ctx->pc == 0x29EBD4u) {
        ctx->pc = 0x29EBD8u;
        goto label_29ebd8;
    }
    ctx->pc = 0x29EBD0u;
    {
        const bool branch_taken_0x29ebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebd0) {
            ctx->pc = 0x29EBF0u;
            goto label_29ebf0;
        }
    }
    ctx->pc = 0x29EBD8u;
label_29ebd8:
    // 0x29ebd8: 0xc0a776a  jal         func_29DDA8
label_29ebdc:
    if (ctx->pc == 0x29EBDCu) {
        ctx->pc = 0x29EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBD8u;
        // 0x29ebdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBE0u;
        goto label_29ebe0;
    }
    ctx->pc = 0x29EBD8u;
    SET_GPR_U32(ctx, 31, 0x29EBE0u);
    ctx->pc = 0x29EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBD8u;
    // 0x29ebdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DDA8u, 0x29EBD8u, 0x29EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBE0u;
label_29ebe0:
    // 0x29ebe0: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29ebe4:
    // 0x29ebe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ebe8:
    // 0x29ebe8: 0xc0a7c20  jal         func_29F080
label_29ebec:
    if (ctx->pc == 0x29EBECu) {
        ctx->pc = 0x29EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBE8u;
        // 0x29ebec: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBF0u;
        goto label_29ebf0;
    }
    ctx->pc = 0x29EBE8u;
    SET_GPR_U32(ctx, 31, 0x29EBF0u);
    ctx->pc = 0x29EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBE8u;
    // 0x29ebec: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29EBE8u, 0x29EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBF0u;
label_29ebf0:
    // 0x29ebf0: 0xc0a1e2c  jal         func_2878B0
label_29ebf4:
    if (ctx->pc == 0x29EBF4u) {
        ctx->pc = 0x29EBF8u;
        goto label_29ebf8;
    }
    ctx->pc = 0x29EBF0u;
    SET_GPR_U32(ctx, 31, 0x29EBF8u);
    ctx->pc = 0x2878B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2878B0u, 0x29EBF0u, 0x29EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBF8u;
label_29ebf8:
    // 0x29ebf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29ebfc:
    if (ctx->pc == 0x29EBFCu) {
        ctx->pc = 0x29EC00u;
        goto label_29ec00;
    }
    ctx->pc = 0x29EBF8u;
    {
        const bool branch_taken_0x29ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebf8) {
            ctx->pc = 0x29EC18u;
            goto label_29ec18;
        }
    }
    ctx->pc = 0x29EC00u;
label_29ec00:
    // 0x29ec00: 0xc0a77ee  jal         func_29DFB8
label_29ec04:
    if (ctx->pc == 0x29EC04u) {
        ctx->pc = 0x29EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC00u;
        // 0x29ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC08u;
        goto label_29ec08;
    }
    ctx->pc = 0x29EC00u;
    SET_GPR_U32(ctx, 31, 0x29EC08u);
    ctx->pc = 0x29EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC00u;
    // 0x29ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DFB8u, 0x29EC00u, 0x29EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC08u;
label_29ec08:
    // 0x29ec08: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29ec0c:
    // 0x29ec0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ec10:
    // 0x29ec10: 0xc0a7c20  jal         func_29F080
label_29ec14:
    if (ctx->pc == 0x29EC14u) {
        ctx->pc = 0x29EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC10u;
        // 0x29ec14: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC18u;
        goto label_29ec18;
    }
    ctx->pc = 0x29EC10u;
    SET_GPR_U32(ctx, 31, 0x29EC18u);
    ctx->pc = 0x29EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC10u;
    // 0x29ec14: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29EC10u, 0x29EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC18u;
label_29ec18:
    // 0x29ec18: 0xc0a1dea  jal         func_2877A8
label_29ec1c:
    if (ctx->pc == 0x29EC1Cu) {
        ctx->pc = 0x29EC20u;
        goto label_29ec20;
    }
    ctx->pc = 0x29EC18u;
    SET_GPR_U32(ctx, 31, 0x29EC20u);
    ctx->pc = 0x2877A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877A8u, 0x29EC18u, 0x29EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC20u;
label_29ec20:
    // 0x29ec20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29ec24:
    if (ctx->pc == 0x29EC24u) {
        ctx->pc = 0x29EC28u;
        goto label_29ec28;
    }
    ctx->pc = 0x29EC20u;
    {
        const bool branch_taken_0x29ec20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec20) {
            ctx->pc = 0x29EC40u;
            goto label_29ec40;
        }
    }
    ctx->pc = 0x29EC28u;
label_29ec28:
    // 0x29ec28: 0xc0a77ac  jal         func_29DEB0
label_29ec2c:
    if (ctx->pc == 0x29EC2Cu) {
        ctx->pc = 0x29EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC28u;
        // 0x29ec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC30u;
        goto label_29ec30;
    }
    ctx->pc = 0x29EC28u;
    SET_GPR_U32(ctx, 31, 0x29EC30u);
    ctx->pc = 0x29EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC28u;
    // 0x29ec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DEB0u, 0x29EC28u, 0x29EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC30u;
label_29ec30:
    // 0x29ec30: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x29ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29ec34:
    // 0x29ec34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ec38:
    // 0x29ec38: 0xc0a7c20  jal         func_29F080
label_29ec3c:
    if (ctx->pc == 0x29EC3Cu) {
        ctx->pc = 0x29EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC38u;
        // 0x29ec3c: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC40u;
        goto label_29ec40;
    }
    ctx->pc = 0x29EC38u;
    SET_GPR_U32(ctx, 31, 0x29EC40u);
    ctx->pc = 0x29EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC38u;
    // 0x29ec3c: 0x8e06020c  lw          $a2, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29EC38u, 0x29EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC40u;
label_29ec40:
    // 0x29ec40: 0xc0a1f1c  jal         func_287C70
label_29ec44:
    if (ctx->pc == 0x29EC44u) {
        ctx->pc = 0x29EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC40u;
        // 0x29ec44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC48u;
        goto label_29ec48;
    }
    ctx->pc = 0x29EC40u;
    SET_GPR_U32(ctx, 31, 0x29EC48u);
    ctx->pc = 0x29EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC40u;
    // 0x29ec44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C70u, 0x29EC40u, 0x29EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC48u;
label_29ec48:
    // 0x29ec48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29ec4c:
    if (ctx->pc == 0x29EC4Cu) {
        ctx->pc = 0x29EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC48u;
        // 0x29ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC50u;
        goto label_29ec50;
    }
    ctx->pc = 0x29EC48u;
    {
        const bool branch_taken_0x29ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC48u;
        // 0x29ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec48) {
            ctx->pc = 0x29EC60u;
            goto label_29ec60;
        }
    }
    ctx->pc = 0x29EC50u;
label_29ec50:
    // 0x29ec50: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29ec54:
    // 0x29ec54: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x29ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_29ec58:
    // 0x29ec58: 0x40f809  jalr        $v0
label_29ec5c:
    if (ctx->pc == 0x29EC5Cu) {
        ctx->pc = 0x29EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC58u;
        // 0x29ec5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC60u;
        goto label_29ec60;
    }
    ctx->pc = 0x29EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EC60u);
        ctx->pc = 0x29EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC58u;
        // 0x29ec5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC58u, 0x29EC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EC60u;
label_29ec60:
    // 0x29ec60: 0xc0a1f0e  jal         func_287C38
label_29ec64:
    if (ctx->pc == 0x29EC64u) {
        ctx->pc = 0x29EC68u;
        goto label_29ec68;
    }
    ctx->pc = 0x29EC60u;
    SET_GPR_U32(ctx, 31, 0x29EC68u);
    ctx->pc = 0x287C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C38u, 0x29EC60u, 0x29EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC68u;
label_29ec68:
    // 0x29ec68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29ec6c:
    if (ctx->pc == 0x29EC6Cu) {
        ctx->pc = 0x29EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC68u;
        // 0x29ec6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC70u;
        goto label_29ec70;
    }
    ctx->pc = 0x29EC68u;
    {
        const bool branch_taken_0x29ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC68u;
        // 0x29ec6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec68) {
            ctx->pc = 0x29EC80u;
            goto label_29ec80;
        }
    }
    ctx->pc = 0x29EC70u;
label_29ec70:
    // 0x29ec70: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29ec74:
    // 0x29ec74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29ec78:
    // 0x29ec78: 0x40f809  jalr        $v0
label_29ec7c:
    if (ctx->pc == 0x29EC7Cu) {
        ctx->pc = 0x29EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC78u;
        // 0x29ec7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC80u;
        goto label_29ec80;
    }
    ctx->pc = 0x29EC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EC80u);
        ctx->pc = 0x29EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC78u;
        // 0x29ec7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC78u, 0x29EC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EC80u;
label_29ec80:
    // 0x29ec80: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_29ec84:
    if (ctx->pc == 0x29EC84u) {
        ctx->pc = 0x29EC88u;
        goto label_29ec88;
    }
    ctx->pc = 0x29EC80u;
    {
        const bool branch_taken_0x29ec80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec80) {
            ctx->pc = 0x29EC98u;
            goto label_29ec98;
        }
    }
    ctx->pc = 0x29EC88u;
label_29ec88:
    // 0x29ec88: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29ec8c:
    // 0x29ec8c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x29ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_29ec90:
    // 0x29ec90: 0x40f809  jalr        $v0
label_29ec94:
    if (ctx->pc == 0x29EC94u) {
        ctx->pc = 0x29EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC90u;
        // 0x29ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC98u;
        goto label_29ec98;
    }
    ctx->pc = 0x29EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EC98u);
        ctx->pc = 0x29EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC90u;
        // 0x29ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC90u, 0x29EC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EC98u;
label_29ec98:
    // 0x29ec98: 0xc0a1f92  jal         func_287E48
label_29ec9c:
    if (ctx->pc == 0x29EC9Cu) {
        ctx->pc = 0x29ECA0u;
        goto label_29eca0;
    }
    ctx->pc = 0x29EC98u;
    SET_GPR_U32(ctx, 31, 0x29ECA0u);
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x29EC98u, 0x29ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECA0u;
label_29eca0:
    // 0x29eca0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_29eca4:
    if (ctx->pc == 0x29ECA4u) {
        ctx->pc = 0x29ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECA0u;
        // 0x29eca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECA8u;
        goto label_29eca8;
    }
    ctx->pc = 0x29ECA0u;
    {
        const bool branch_taken_0x29eca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eca0) {
            ctx->pc = 0x29ECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ECA0u;
            // 0x29eca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ED60u;
            goto label_29ed60;
        }
    }
    ctx->pc = 0x29ECA8u;
label_29eca8:
    // 0x29eca8: 0xc0a1f58  jal         func_287D60
label_29ecac:
    if (ctx->pc == 0x29ECACu) {
        ctx->pc = 0x29ECB0u;
        goto label_29ecb0;
    }
    ctx->pc = 0x29ECA8u;
    SET_GPR_U32(ctx, 31, 0x29ECB0u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x29ECA8u, 0x29ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECB0u;
label_29ecb0:
    // 0x29ecb0: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_29ecb4:
    if (ctx->pc == 0x29ECB4u) {
        ctx->pc = 0x29ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECB0u;
        // 0x29ecb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECB8u;
        goto label_29ecb8;
    }
    ctx->pc = 0x29ECB0u;
    {
        const bool branch_taken_0x29ecb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ecb0) {
            ctx->pc = 0x29ECB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ECB0u;
            // 0x29ecb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ED60u;
            goto label_29ed60;
        }
    }
    ctx->pc = 0x29ECB8u;
label_29ecb8:
    // 0x29ecb8: 0x26150238  addiu       $s5, $s0, 0x238
    ctx->pc = 0x29ecb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
label_29ecbc:
    // 0x29ecbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29ecbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ecc0:
    // 0x29ecc0: 0x26130014  addiu       $s3, $s0, 0x14
    ctx->pc = 0x29ecc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_29ecc4:
    // 0x29ecc4: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29ecc8:
    // 0x29ecc8: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x29ecc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29eccc:
    // 0x29eccc: 0x0  nop
    ctx->pc = 0x29ecccu;
    // NOP
label_29ecd0:
    // 0x29ecd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ecd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ecd4:
    // 0x29ecd4: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29ecd8:
    // 0x29ecd8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_29ecdc:
    // 0x29ecdc: 0x0  nop
    ctx->pc = 0x29ecdcu;
    // NOP
label_29ece0:
    // 0x29ece0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ece4:
    // 0x29ece4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29ece8:
    if (ctx->pc == 0x29ECE8u) {
        ctx->pc = 0x29ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECE4u;
        // 0x29ece8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECECu;
        goto label_29ecec;
    }
    ctx->pc = 0x29ECE4u;
    {
        const bool branch_taken_0x29ece4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECE4u;
        // 0x29ece8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ece4) {
            ctx->pc = 0x29ECFCu;
            goto label_29ecfc;
        }
    }
    ctx->pc = 0x29ECECu;
label_29ecec:
    // 0x29ecec: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29ecf0:
    // 0x29ecf0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_29ecf4:
    // 0x29ecf4: 0x40f809  jalr        $v0
label_29ecf8:
    if (ctx->pc == 0x29ECF8u) {
        ctx->pc = 0x29ECFCu;
        goto label_29ecfc;
    }
    ctx->pc = 0x29ECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29ECFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ECF4u, 0x29ECFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ECFCu;
label_29ecfc:
    // 0x29ecfc: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29ecfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29ed00:
    // 0x29ed00: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_29ed04:
    if (ctx->pc == 0x29ED04u) {
        ctx->pc = 0x29ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED00u;
        // 0x29ed04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED08u;
        goto label_29ed08;
    }
    ctx->pc = 0x29ED00u;
    {
        const bool branch_taken_0x29ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED00u;
        // 0x29ed04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed00) {
            ctx->pc = 0x29ECE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ece0;
        }
    }
    ctx->pc = 0x29ED08u;
label_29ed08:
    // 0x29ed08: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29ed08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ed0c:
    // 0x29ed0c: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29ed0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29ed10:
    // 0x29ed10: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_29ed14:
    if (ctx->pc == 0x29ED14u) {
        ctx->pc = 0x29ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED10u;
        // 0x29ed14: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED18u;
        goto label_29ed18;
    }
    ctx->pc = 0x29ED10u;
    {
        const bool branch_taken_0x29ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED10u;
        // 0x29ed14: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed10) {
            ctx->pc = 0x29ECD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ecd0;
        }
    }
    ctx->pc = 0x29ED18u;
label_29ed18:
    // 0x29ed18: 0xc0a71e0  jal         func_29C780
label_29ed1c:
    if (ctx->pc == 0x29ED1Cu) {
        ctx->pc = 0x29ED20u;
        goto label_29ed20;
    }
    ctx->pc = 0x29ED18u;
    SET_GPR_U32(ctx, 31, 0x29ED20u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29ED18u, 0x29ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED20u;
label_29ed20:
    // 0x29ed20: 0xc0a7244  jal         func_29C910
label_29ed24:
    if (ctx->pc == 0x29ED24u) {
        ctx->pc = 0x29ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED20u;
        // 0x29ed24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED28u;
        goto label_29ed28;
    }
    ctx->pc = 0x29ED20u;
    SET_GPR_U32(ctx, 31, 0x29ED28u);
    ctx->pc = 0x29ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED20u;
    // 0x29ed24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x29ED20u, 0x29ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED28u;
label_29ed28:
    // 0x29ed28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29ed2c:
    // 0x29ed2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ed2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29ed30:
    // 0x29ed30: 0xc0d73cc  jal         func_35CF30
label_29ed34:
    if (ctx->pc == 0x29ED34u) {
        ctx->pc = 0x29ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED30u;
        // 0x29ed34: 0x24a5c540  addiu       $a1, $a1, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED38u;
        goto label_29ed38;
    }
    ctx->pc = 0x29ED30u;
    SET_GPR_U32(ctx, 31, 0x29ED38u);
    ctx->pc = 0x29ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED30u;
    // 0x29ed34: 0x24a5c540  addiu       $a1, $a1, -0x3AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29ED30u, 0x29ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED38u;
label_29ed38:
    // 0x29ed38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29ed3c:
    // 0x29ed3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29ed40:
    if (ctx->pc == 0x29ED40u) {
        ctx->pc = 0x29ED44u;
        goto label_29ed44;
    }
    ctx->pc = 0x29ED3Cu;
    {
        const bool branch_taken_0x29ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed3c) {
            ctx->pc = 0x29ED4Cu;
            goto label_29ed4c;
        }
    }
    ctx->pc = 0x29ED44u;
label_29ed44:
    // 0x29ed44: 0xc0a2198  jal         func_288660
label_29ed48:
    if (ctx->pc == 0x29ED48u) {
        ctx->pc = 0x29ED4Cu;
        goto label_29ed4c;
    }
    ctx->pc = 0x29ED44u;
    SET_GPR_U32(ctx, 31, 0x29ED4Cu);
    ctx->pc = 0x288660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288660u, 0x29ED44u, 0x29ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED4Cu;
label_29ed4c:
    // 0x29ed4c: 0xc0a71e0  jal         func_29C780
label_29ed50:
    if (ctx->pc == 0x29ED50u) {
        ctx->pc = 0x29ED54u;
        goto label_29ed54;
    }
    ctx->pc = 0x29ED4Cu;
    SET_GPR_U32(ctx, 31, 0x29ED54u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29ED4Cu, 0x29ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED54u;
label_29ed54:
    // 0x29ed54: 0xc0a7142  jal         func_29C508
label_29ed58:
    if (ctx->pc == 0x29ED58u) {
        ctx->pc = 0x29ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED54u;
        // 0x29ed58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED5Cu;
        goto label_29ed5c;
    }
    ctx->pc = 0x29ED54u;
    SET_GPR_U32(ctx, 31, 0x29ED5Cu);
    ctx->pc = 0x29ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED54u;
    // 0x29ed58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x29ED54u, 0x29ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED5Cu;
label_29ed5c:
    // 0x29ed5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ed5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ed60:
    // 0x29ed60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ed60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29ed64:
    // 0x29ed64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ed64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ed68:
    // 0x29ed68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ed68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ed6c:
    // 0x29ed6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ed6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ed70:
    // 0x29ed70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ed70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ed74:
    // 0x29ed74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ed74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ed78:
    // 0x29ed78: 0x3e00008  jr          $ra
label_29ed7c:
    if (ctx->pc == 0x29ED7Cu) {
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED80u;
        goto label_fallthrough_0x29ed78;
    }
    ctx->pc = 0x29ED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ed78:
    ctx->pc = 0x29ED80u;
}
