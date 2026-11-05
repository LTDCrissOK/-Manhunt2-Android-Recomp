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

// Function: sub_003BFC70
// Address: 0x3bfc70 - 0x3bfd08
void sub_003BFC70_0x3bfc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFC70_0x3bfc70");
#endif

    switch (ctx->pc) {
        case 0x3bfcc0u: goto label_3bfcc0;
        case 0x3bfcf8u: goto label_3bfcf8;
        default: break;
    }

    ctx->pc = 0x3bfc70u;

    // 0x3bfc70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3bfc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3bfc74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3bfc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc78: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bfc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3bfc7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bfc80: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x3bfc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x3bfc84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bfc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bfc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3bfc8c: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x3bfc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bfc90: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x3bfc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x3bfc94: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x3bfc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x3bfc98: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x3bfc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x3bfc9c: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x3bfc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x3bfca0: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x3bfca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x3bfca4: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x3bfca4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3bfca8: 0xe7ae00b4  swc1        $f14, 0xB4($sp)
    ctx->pc = 0x3bfca8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3bfcac: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x3bfcacu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3bfcb0: 0xe7b200bc  swc1        $f18, 0xBC($sp)
    ctx->pc = 0x3bfcb0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3bfcb4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bfcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3bfcb8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3BFCB8u;
    SET_GPR_U32(ctx, 31, 0x3BFCC0u);
    ctx->pc = 0x3BFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFCB8u;
    // 0x3bfcbc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3BFCB8u, 0x3BFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFCC0u;
label_3bfcc0:
    // 0x3bfcc0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3bfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3bfcc4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bfcc8: 0x8c86cddc  lw          $a2, -0x3224($a0)
    ctx->pc = 0x3bfcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3bfccc: 0x2463fc68  addiu       $v1, $v1, -0x398
    ctx->pc = 0x3bfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966376));
    // 0x3bfcd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bfcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfcd4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3bfcd8: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x3bfcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x3bfcdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bfcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfce0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3bfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x3bfce4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3bfce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bfce8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3bfce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3bfcec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3bfcf0: 0xc0eff42  jal         func_3BFD08
    ctx->pc = 0x3BFCF0u;
    SET_GPR_U32(ctx, 31, 0x3BFCF8u);
    ctx->pc = 0x3BFCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFCF0u;
    // 0x3bfcf4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFD08u, 0x3BFCF0u, 0x3BFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFCF8u;
label_3bfcf8:
    // 0x3bfcf8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bfcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bfcfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bfcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bfd00: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD00u;
        // 0x3bfd04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFD08u;
}
