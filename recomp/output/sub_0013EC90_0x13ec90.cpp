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

// Function: sub_0013EC90
// Address: 0x13ec90 - 0x13ed50
void sub_0013EC90_0x13ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EC90_0x13ec90");
#endif

    switch (ctx->pc) {
        case 0x13ecb8u: goto label_13ecb8;
        case 0x13ecd0u: goto label_13ecd0;
        case 0x13ecdcu: goto label_13ecdc;
        case 0x13ece8u: goto label_13ece8;
        case 0x13ecf4u: goto label_13ecf4;
        case 0x13ed04u: goto label_13ed04;
        case 0x13ed24u: goto label_13ed24;
        default: break;
    }

    ctx->pc = 0x13ec90u;

    // 0x13ec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ec94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ec98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ec9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ec9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13eca4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13eca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ecac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13ecb0: 0xc04f91e  jal         func_13E478
    ctx->pc = 0x13ECB0u;
    SET_GPR_U32(ctx, 31, 0x13ECB8u);
    ctx->pc = 0x13ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECB0u;
    // 0x13ecb4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E478u, 0x13ECB0u, 0x13ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECB8u;
label_13ecb8:
    // 0x13ecb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ecb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecbc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13ecc0: 0x12300b  movn        $a2, $zero, $s2
    ctx->pc = 0x13ecc0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x13ecc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecc8: 0xc045612  jal         func_115848
    ctx->pc = 0x13ECC8u;
    SET_GPR_U32(ctx, 31, 0x13ECD0u);
    ctx->pc = 0x13ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECC8u;
    // 0x13eccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13ECC8u, 0x13ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECD0u;
label_13ecd0:
    // 0x13ecd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecd4: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13ECD4u;
    SET_GPR_U32(ctx, 31, 0x13ECDCu);
    ctx->pc = 0x13ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECD4u;
    // 0x13ecd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13ECD4u, 0x13ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECDCu;
label_13ecdc:
    // 0x13ecdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ecdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ece0: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x13ECE0u;
    SET_GPR_U32(ctx, 31, 0x13ECE8u);
    ctx->pc = 0x13ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECE0u;
    // 0x13ece4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x13ECE0u, 0x13ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECE8u;
label_13ece8:
    // 0x13ece8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13ecec: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x13ECECu;
    SET_GPR_U32(ctx, 31, 0x13ECF4u);
    ctx->pc = 0x13ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECECu;
    // 0x13ecf0: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x13ECECu, 0x13ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECF4u;
label_13ecf4:
    // 0x13ecf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13ecf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecfc: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x13ECFCu;
    SET_GPR_U32(ctx, 31, 0x13ED04u);
    ctx->pc = 0x13ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECFCu;
    // 0x13ed00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x13ECFCu, 0x13ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED04u;
label_13ed04:
    // 0x13ed04: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13ed08: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ed0c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13ed10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ed18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ed18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed1c: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13ED1Cu;
    SET_GPR_U32(ctx, 31, 0x13ED24u);
    ctx->pc = 0x13ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED1Cu;
    // 0x13ed20: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13ED1Cu, 0x13ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED24u;
label_13ed24:
    // 0x13ed24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13ed24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ed28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ed2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ed2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ed30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ed30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ed34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13ed34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ed38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ed3c: 0x3e00008  jr          $ra
    ctx->pc = 0x13ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED3Cu;
        // 0x13ed40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED44u;
    // 0x13ed44: 0x0  nop
    ctx->pc = 0x13ed44u;
    // NOP
    // 0x13ed48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ed4c: 0x0  nop
    ctx->pc = 0x13ed4cu;
    // NOP
    ctx->pc = 0x13ed50u;
}
