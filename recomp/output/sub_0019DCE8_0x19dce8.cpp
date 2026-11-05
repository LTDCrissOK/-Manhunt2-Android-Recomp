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

// Function: sub_0019DCE8
// Address: 0x19dce8 - 0x19ddd0
void sub_0019DCE8_0x19dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DCE8_0x19dce8");
#endif

    switch (ctx->pc) {
        case 0x19dd24u: goto label_19dd24;
        case 0x19dd38u: goto label_19dd38;
        case 0x19dd40u: goto label_19dd40;
        case 0x19dd54u: goto label_19dd54;
        case 0x19dd68u: goto label_19dd68;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd80u: goto label_19dd80;
        case 0x19dda0u: goto label_19dda0;
        default: break;
    }

    ctx->pc = 0x19dce8u;

    // 0x19dce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19dcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19dcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19dcf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19dcf4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19dcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19dcfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19dcfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19dd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dd04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19dd04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd08: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x19dd08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19dd0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19dd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19dd14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19dd14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19dd18: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x19dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x19dd1c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x19DD1Cu;
    SET_GPR_U32(ctx, 31, 0x19DD24u);
    ctx->pc = 0x19DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD1Cu;
    // 0x19dd20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19DD1Cu, 0x19DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD24u;
label_19dd24:
    // 0x19dd24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19dd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19dd2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19dd30: 0xc067774  jal         func_19DDD0
    ctx->pc = 0x19DD30u;
    SET_GPR_U32(ctx, 31, 0x19DD38u);
    ctx->pc = 0x19DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD30u;
    // 0x19dd34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDD0u, 0x19DD30u, 0x19DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD38u;
label_19dd38:
    // 0x19dd38: 0xc095368  jal         func_254DA0
    ctx->pc = 0x19DD38u;
    SET_GPR_U32(ctx, 31, 0x19DD40u);
    ctx->pc = 0x19DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD38u;
    // 0x19dd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x19DD38u, 0x19DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD40u;
label_19dd40:
    // 0x19dd40: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD40u;
    {
        const bool branch_taken_0x19dd40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD40u;
        // 0x19dd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd40) {
            ctx->pc = 0x19DD4Cu;
            goto label_19dd4c;
        }
    }
    ctx->pc = 0x19DD48u;
    // 0x19dd48: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x19dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_19dd4c:
    // 0x19dd4c: 0xc061a16  jal         func_186858
    ctx->pc = 0x19DD4Cu;
    SET_GPR_U32(ctx, 31, 0x19DD54u);
    ctx->pc = 0x19DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD4Cu;
    // 0x19dd50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DD4Cu, 0x19DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD54u;
label_19dd54:
    // 0x19dd54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19dd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19dd58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19dd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd60: 0xc061a16  jal         func_186858
    ctx->pc = 0x19DD60u;
    SET_GPR_U32(ctx, 31, 0x19DD68u);
    ctx->pc = 0x19DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD60u;
    // 0x19dd64: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DD60u, 0x19DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD68u;
label_19dd68:
    // 0x19dd68: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x19dd6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19dd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19dd70: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x19DD70u;
    SET_GPR_U32(ctx, 31, 0x19DD78u);
    ctx->pc = 0x19DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD70u;
    // 0x19dd74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x19DD70u, 0x19DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD78u;
label_19dd78:
    // 0x19dd78: 0xc061a16  jal         func_186858
    ctx->pc = 0x19DD78u;
    SET_GPR_U32(ctx, 31, 0x19DD80u);
    ctx->pc = 0x19DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD78u;
    // 0x19dd7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DD78u, 0x19DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD80u;
label_19dd80:
    // 0x19dd80: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x19dd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x19dd84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19dd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dd88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd8c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x19dd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19dd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd94: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x19dd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x19dd98: 0xc061a16  jal         func_186858
    ctx->pc = 0x19DD98u;
    SET_GPR_U32(ctx, 31, 0x19DDA0u);
    ctx->pc = 0x19DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD98u;
    // 0x19dd9c: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DD98u, 0x19DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDA0u;
label_19dda0:
    // 0x19dda0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19dda4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19dda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dda8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ddac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ddb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ddb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ddb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19ddb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ddb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ddb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ddbc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x19ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ddc0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x19ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x19ddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDC4u;
        // 0x19ddc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DDCCu;
    // 0x19ddcc: 0x0  nop
    ctx->pc = 0x19ddccu;
    // NOP
    ctx->pc = 0x19ddd0u;
}
