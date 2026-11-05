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

// Function: sub_001989C8
// Address: 0x1989c8 - 0x198a50
void sub_001989C8_0x1989c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001989C8_0x1989c8");
#endif

    switch (ctx->pc) {
        case 0x1989c8u: goto label_1989c8;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989d0u: goto label_1989d0;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989dcu: goto label_1989dc;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989e4u: goto label_1989e4;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989ecu: goto label_1989ec;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989f4u: goto label_1989f4;
        case 0x1989f8u: goto label_1989f8;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a00u: goto label_198a00;
        case 0x198a04u: goto label_198a04;
        case 0x198a08u: goto label_198a08;
        case 0x198a0cu: goto label_198a0c;
        case 0x198a10u: goto label_198a10;
        case 0x198a14u: goto label_198a14;
        case 0x198a18u: goto label_198a18;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a20u: goto label_198a20;
        case 0x198a24u: goto label_198a24;
        case 0x198a28u: goto label_198a28;
        case 0x198a2cu: goto label_198a2c;
        case 0x198a30u: goto label_198a30;
        case 0x198a34u: goto label_198a34;
        case 0x198a38u: goto label_198a38;
        case 0x198a3cu: goto label_198a3c;
        case 0x198a40u: goto label_198a40;
        case 0x198a44u: goto label_198a44;
        case 0x198a48u: goto label_198a48;
        case 0x198a4cu: goto label_198a4c;
        default: break;
    }

    ctx->pc = 0x1989c8u;

label_1989c8:
    // 0x1989c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1989cc:
    // 0x1989cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1989ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1989d0:
    // 0x1989d0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1989d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1989d4:
    // 0x1989d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1989d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1989d8:
    // 0x1989d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1989dc:
    // 0x1989dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1989dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1989e0:
    // 0x1989e0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1989e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1989e4:
    // 0x1989e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1989e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1989e8:
    // 0x1989e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1989ec:
    // 0x1989ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1989ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1989f0:
    // 0x1989f0: 0xc06faee  jal         func_1BEBB8
label_1989f4:
    if (ctx->pc == 0x1989F4u) {
        ctx->pc = 0x1989F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989F0u;
        // 0x1989f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1989F8u;
        goto label_1989f8;
    }
    ctx->pc = 0x1989F0u;
    SET_GPR_U32(ctx, 31, 0x1989F8u);
    ctx->pc = 0x1989F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989F0u;
    // 0x1989f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1989F0u, 0x1989F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989F8u;
label_1989f8:
    // 0x1989f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1989fc:
    // 0x1989fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1989fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198a00:
    // 0x198a00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_198a04:
    // 0x198a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x198a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_198a08:
    // 0x198a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198a0c:
    // 0x198a0c: 0x8c69002c  lw          $t1, 0x2C($v1)
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_198a10:
    // 0x198a10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x198a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198a14:
    // 0x198a14: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x198a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_198a18:
    // 0x198a18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x198a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_198a1c:
    // 0x198a1c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198a20:
    // 0x198a20: 0x120f809  jalr        $t1
label_198a24:
    if (ctx->pc == 0x198A24u) {
        ctx->pc = 0x198A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A20u;
        // 0x198a24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A28u;
        goto label_198a28;
    }
    ctx->pc = 0x198A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x198A28u);
        ctx->pc = 0x198A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A20u;
        // 0x198a24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A20u, 0x198A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198A28u;
label_198a28:
    // 0x198a28: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_198a2c:
    // 0x198a2c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198a30:
    // 0x198a30: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_198a34:
    // 0x198a34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_198a38:
    // 0x198a38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x198a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198a3c:
    // 0x198a3c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_198a40:
    // 0x198a40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198a44:
    // 0x198a44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x198a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_198a48:
    // 0x198a48: 0x3e00008  jr          $ra
label_198a4c:
    if (ctx->pc == 0x198A4Cu) {
        ctx->pc = 0x198A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A48u;
        // 0x198a4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A50u;
        goto label_fallthrough_0x198a48;
    }
    ctx->pc = 0x198A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A48u;
        // 0x198a4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198a48:
    ctx->pc = 0x198A50u;
}
