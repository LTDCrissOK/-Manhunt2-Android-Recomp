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

// Function: FUN_00156408
// Address: 0x156408 - 0x15651e
void FUN_00156408_0x156408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156408_0x156408");
#endif

    switch (ctx->pc) {
        case 0x156468u: goto label_156468;
        case 0x156474u: goto label_156474;
        case 0x1564b8u: goto label_1564b8;
        case 0x1564c4u: goto label_1564c4;
        case 0x1564f8u: goto label_1564f8;
        default: break;
    }

    ctx->pc = 0x156408u;

    // 0x156408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15640c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x156410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156414: 0x0  nop
    ctx->pc = 0x156414u;
    // NOP
    // 0x156418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x156418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15641c: 0x0  nop
    ctx->pc = 0x15641cu;
    // NOP
    // 0x156420: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x156420u;
    {
        const bool branch_taken_0x156420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156420) {
            ctx->pc = 0x156424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156420u;
            // 0x156424: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x156428u;
            goto label_156428;
        }
    }
    ctx->pc = 0x156428u;
label_156428:
    // 0x156428: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x156428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15642c: 0xe6200548  swc1        $f0, 0x548($s1)
    ctx->pc = 0x15642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1352), bits); }
    // 0x156430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15643c: 0x3e00008  jr          $ra
    ctx->pc = 0x15643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15643Cu;
        // 0x156440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156444u;
    // 0x156444: 0x0  nop
    ctx->pc = 0x156444u;
    // NOP
    // 0x156448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15644c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15645c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15645cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156460: 0xc046002  jal         func_118008
    ctx->pc = 0x156460u;
    SET_GPR_U32(ctx, 31, 0x156468u);
    ctx->pc = 0x156464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156460u;
    // 0x156464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x156460u, 0x156468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156468u;
label_156468:
    // 0x156468: 0xae220544  sw          $v0, 0x544($s1)
    ctx->pc = 0x156468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 2));
    // 0x15646c: 0xc046086  jal         func_118218
    ctx->pc = 0x15646Cu;
    SET_GPR_U32(ctx, 31, 0x156474u);
    ctx->pc = 0x156470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15646Cu;
    // 0x156470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x15646Cu, 0x156474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156474u;
label_156474:
    // 0x156474: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x156474u;
    {
        const bool branch_taken_0x156474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156474) {
            ctx->pc = 0x156478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156474u;
            // 0x156478: 0x8e220544  lw          $v0, 0x544($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15647Cu;
            goto label_15647c;
        }
    }
    ctx->pc = 0x15647Cu;
label_15647c:
    // 0x15647c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15647cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156480: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x156480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15648c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15648cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156490: 0x3e00008  jr          $ra
    ctx->pc = 0x156490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156490u;
        // 0x156494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156498u;
    // 0x156498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15649c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1564a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1564a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1564a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1564a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1564acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1564b0: 0xc046002  jal         func_118008
    ctx->pc = 0x1564B0u;
    SET_GPR_U32(ctx, 31, 0x1564B8u);
    ctx->pc = 0x1564B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564B0u;
    // 0x1564b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1564B0u, 0x1564B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564B8u;
label_1564b8:
    // 0x1564b8: 0xae220544  sw          $v0, 0x544($s1)
    ctx->pc = 0x1564b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 2));
    // 0x1564bc: 0xc046086  jal         func_118218
    ctx->pc = 0x1564BCu;
    SET_GPR_U32(ctx, 31, 0x1564C4u);
    ctx->pc = 0x1564C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564BCu;
    // 0x1564c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x1564BCu, 0x1564C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564C4u;
label_1564c4:
    // 0x1564c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1564c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1564c8: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x1564c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1564cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1564ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1564d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1564d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1564d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1564d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1564d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1564D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D8u;
        // 0x1564dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1564D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1564E0u;
    // 0x1564e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1564e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1564e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1564e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1564e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1564e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1564ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1564f0: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1564F0u;
    SET_GPR_U32(ctx, 31, 0x1564F8u);
    ctx->pc = 0x1564F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564F0u;
    // 0x1564f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1564F0u, 0x1564F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564F8u;
label_1564f8:
    // 0x1564f8: 0xae020540  sw          $v0, 0x540($s0)
    ctx->pc = 0x1564f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 2));
    // 0x1564fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156504: 0x3e00008  jr          $ra
    ctx->pc = 0x156504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156504u;
        // 0x156508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15650Cu;
    // 0x15650c: 0x0  nop
    ctx->pc = 0x15650cu;
    // NOP
    // 0x156510: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x156514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156518: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x156518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15651c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x15651eu;
}
