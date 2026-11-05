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

// Function: sub_002E0408
// Address: 0x2e0408 - 0x2e0488
void sub_002E0408_0x2e0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0408_0x2e0408");
#endif

    switch (ctx->pc) {
        case 0x2e0408u: goto label_2e0408;
        case 0x2e040cu: goto label_2e040c;
        case 0x2e0410u: goto label_2e0410;
        case 0x2e0414u: goto label_2e0414;
        case 0x2e0418u: goto label_2e0418;
        case 0x2e041cu: goto label_2e041c;
        case 0x2e0420u: goto label_2e0420;
        case 0x2e0424u: goto label_2e0424;
        case 0x2e0428u: goto label_2e0428;
        case 0x2e042cu: goto label_2e042c;
        case 0x2e0430u: goto label_2e0430;
        case 0x2e0434u: goto label_2e0434;
        case 0x2e0438u: goto label_2e0438;
        case 0x2e043cu: goto label_2e043c;
        case 0x2e0440u: goto label_2e0440;
        case 0x2e0444u: goto label_2e0444;
        case 0x2e0448u: goto label_2e0448;
        case 0x2e044cu: goto label_2e044c;
        case 0x2e0450u: goto label_2e0450;
        case 0x2e0454u: goto label_2e0454;
        case 0x2e0458u: goto label_2e0458;
        case 0x2e045cu: goto label_2e045c;
        case 0x2e0460u: goto label_2e0460;
        case 0x2e0464u: goto label_2e0464;
        case 0x2e0468u: goto label_2e0468;
        case 0x2e046cu: goto label_2e046c;
        case 0x2e0470u: goto label_2e0470;
        case 0x2e0474u: goto label_2e0474;
        case 0x2e0478u: goto label_2e0478;
        case 0x2e047cu: goto label_2e047c;
        case 0x2e0480u: goto label_2e0480;
        case 0x2e0484u: goto label_2e0484;
        default: break;
    }

    ctx->pc = 0x2e0408u;

label_2e0408:
    // 0x2e0408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e040c:
    // 0x2e040c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2e040cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0410:
    // 0x2e0410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e0414:
    // 0x2e0414: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x2e0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_2e0418:
    // 0x2e0418: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2e041c:
    if (ctx->pc == 0x2E041Cu) {
        ctx->pc = 0x2E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0418u;
        // 0x2e041c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0420u;
        goto label_2e0420;
    }
    ctx->pc = 0x2E0418u;
    {
        const bool branch_taken_0x2e0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0418u;
        // 0x2e041c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0418) {
            ctx->pc = 0x2E0480u;
            goto label_2e0480;
        }
    }
    ctx->pc = 0x2E0420u;
label_2e0420:
    // 0x2e0420: 0xc46c00d8  lwc1        $f12, 0xD8($v1)
    ctx->pc = 0x2e0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e0424:
    // 0x2e0424: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e0424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e0428:
    // 0x2e0428: 0x0  nop
    ctx->pc = 0x2e0428u;
    // NOP
label_2e042c:
    // 0x2e042c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2e042cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0430:
    // 0x2e0430: 0x0  nop
    ctx->pc = 0x2e0430u;
    // NOP
label_2e0434:
    // 0x2e0434: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2e0438:
    if (ctx->pc == 0x2E0438u) {
        ctx->pc = 0x2E0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0434u;
        // 0x2e0438: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E043Cu;
        goto label_2e043c;
    }
    ctx->pc = 0x2E0434u;
    {
        const bool branch_taken_0x2e0434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0434u;
        // 0x2e0438: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0434) {
            ctx->pc = 0x2E0480u;
            goto label_2e0480;
        }
    }
    ctx->pc = 0x2E043Cu;
label_2e043c:
    // 0x2e043c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e043cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e0440:
    // 0x2e0440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e0444:
    // 0x2e0444: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e0444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e0448:
    // 0x2e0448: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e0448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e044c:
    // 0x2e044c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e044cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e0450:
    // 0x2e0450: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2e0450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e0454:
    // 0x2e0454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e0454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0458:
    // 0x2e0458: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2e0458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2e045c:
    // 0x2e045c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e045cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2e0460:
    // 0x2e0460: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e0460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2e0464:
    // 0x2e0464: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2e0468:
    // 0x2e0468: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2e0468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e046c:
    // 0x2e046c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2e0470:
    // 0x2e0470: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2e0474:
    // 0x2e0474: 0x60f809  jalr        $v1
label_2e0478:
    if (ctx->pc == 0x2E0478u) {
        ctx->pc = 0x2E0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0474u;
        // 0x2e0478: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E047Cu;
        goto label_2e047c;
    }
    ctx->pc = 0x2E0474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E047Cu);
        ctx->pc = 0x2E0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0474u;
        // 0x2e0478: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0474u, 0x2E047Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E047Cu;
label_2e047c:
    // 0x2e047c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0480:
    // 0x2e0480: 0x3e00008  jr          $ra
label_2e0484:
    if (ctx->pc == 0x2E0484u) {
        ctx->pc = 0x2E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0480u;
        // 0x2e0484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0488u;
        goto label_fallthrough_0x2e0480;
    }
    ctx->pc = 0x2E0480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0480u;
        // 0x2e0484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e0480:
    ctx->pc = 0x2E0488u;
}
