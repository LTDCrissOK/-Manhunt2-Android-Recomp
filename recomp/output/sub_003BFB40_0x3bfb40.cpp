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

// Function: sub_003BFB40
// Address: 0x3bfb40 - 0x3bfbe8
void sub_003BFB40_0x3bfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFB40_0x3bfb40");
#endif

    switch (ctx->pc) {
        case 0x3bfbacu: goto label_3bfbac;
        default: break;
    }

    ctx->pc = 0x3bfb40u;

    // 0x3bfb40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3bfb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3bfb44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3bfb48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3bfb4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3bfb4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bfb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb54: 0x8c4ccddc  lw          $t4, -0x3224($v0)
    ctx->pc = 0x3bfb54u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3bfb58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3bfb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb5c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3bfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3bfb60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bfb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bfb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3bfb68: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x3bfb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x3bfb6c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3bfb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x3bfb70: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x3bfb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x3bfb74: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x3bfb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x3bfb78: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x3bfb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x3bfb7c: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x3bfb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x3bfb80: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x3bfb80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3bfb84: 0xe7ae00bc  swc1        $f14, 0xBC($sp)
    ctx->pc = 0x3bfb84u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3bfb88: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x3bfb88u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3bfb8c: 0xe7b200c4  swc1        $f18, 0xC4($sp)
    ctx->pc = 0x3bfb8cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3bfb90: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3bfb90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bfb94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3bfb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3bfb98: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x3bfb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x3bfb9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3bfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3bfba0: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x3bfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x3bfba4: 0xc0f0d10  jal         func_3C3440
    ctx->pc = 0x3BFBA4u;
    SET_GPR_U32(ctx, 31, 0x3BFBACu);
    ctx->pc = 0x3BFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFBA4u;
    // 0x3bfba8: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3440u, 0x3BFBA4u, 0x3BFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFBACu;
label_3bfbac:
    // 0x3bfbac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bfbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfbb0: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3bfbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3bfbb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BFBB4u;
    {
        const bool branch_taken_0x3bfbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBB4u;
        // 0x3bfbb8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbb4) {
            ctx->pc = 0x3BFBC4u;
            goto label_3bfbc4;
        }
    }
    ctx->pc = 0x3BFBBCu;
    // 0x3bfbbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFBBCu;
    {
        const bool branch_taken_0x3bfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBBCu;
        // 0x3bfbc0: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbbc) {
            ctx->pc = 0x3BFBD0u;
            goto label_3bfbd0;
        }
    }
    ctx->pc = 0x3BFBC4u;
label_3bfbc4:
    // 0x3bfbc4: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x3bfbc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3bfbc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bfbcc: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3bfbccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3bfbd0:
    // 0x3bfbd0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bfbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bfbd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3bfbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfbd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bfbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bfbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBDCu;
        // 0x3bfbe0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFBE4u;
    // 0x3bfbe4: 0x0  nop
    ctx->pc = 0x3bfbe4u;
    // NOP
    ctx->pc = 0x3bfbe8u;
}
