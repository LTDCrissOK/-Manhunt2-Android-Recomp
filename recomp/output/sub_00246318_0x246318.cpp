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

// Function: sub_00246318
// Address: 0x246318 - 0x2463e0
void sub_00246318_0x246318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246318_0x246318");
#endif

    switch (ctx->pc) {
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        default: break;
    }

    ctx->pc = 0x246318u;

label_246318:
    // 0x246318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24631c:
    // 0x24631c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_246320:
    // 0x246320: 0x8ca6038c  lw          $a2, 0x38C($a1)
    ctx->pc = 0x246320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 908)));
label_246324:
    // 0x246324: 0x10c0002c  beqz        $a2, . + 4 + (0x2C << 2)
label_246328:
    if (ctx->pc == 0x246328u) {
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24632Cu;
        goto label_24632c;
    }
    ctx->pc = 0x246324u;
    {
        const bool branch_taken_0x246324 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246324) {
            ctx->pc = 0x2463D8u;
            goto label_2463d8;
        }
    }
    ctx->pc = 0x24632Cu;
label_24632c:
    // 0x24632c: 0x8ca20334  lw          $v0, 0x334($a1)
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_246330:
    // 0x246330: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_246334:
    // 0x246334: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x246334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_246338:
    // 0x246338: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_24633c:
    if (ctx->pc == 0x24633Cu) {
        ctx->pc = 0x24633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246338u;
        // 0x24633c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246340u;
        goto label_246340;
    }
    ctx->pc = 0x246338u;
    {
        const bool branch_taken_0x246338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246338u;
        // 0x24633c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246338) {
            ctx->pc = 0x246370u;
            goto label_246370;
        }
    }
    ctx->pc = 0x246340u;
label_246340:
    // 0x246340: 0x8ce20098  lw          $v0, 0x98($a3)
    ctx->pc = 0x246340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
label_246344:
    // 0x246344: 0x28420532  slti        $v0, $v0, 0x532
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1330) ? 1 : 0);
label_246348:
    // 0x246348: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_24634c:
    if (ctx->pc == 0x24634Cu) {
        ctx->pc = 0x24634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246348u;
        // 0x24634c: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246350u;
        goto label_246350;
    }
    ctx->pc = 0x246348u;
    {
        const bool branch_taken_0x246348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246348) {
            ctx->pc = 0x24634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246348u;
            // 0x24634c: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246374u;
            goto label_246374;
        }
    }
    ctx->pc = 0x246350u;
label_246350:
    // 0x246350: 0xacc51068  sw          $a1, 0x1068($a2)
    ctx->pc = 0x246350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4200), GPR_U32(ctx, 5));
label_246354:
    // 0x246354: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x246354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_246358:
    // 0x246358: 0x8cc30218  lw          $v1, 0x218($a2)
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
label_24635c:
    // 0x24635c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x24635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_246360:
    // 0x246360: 0x40f809  jalr        $v0
label_246364:
    if (ctx->pc == 0x246364u) {
        ctx->pc = 0x246364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246360u;
        // 0x246364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246368u;
        goto label_246368;
    }
    ctx->pc = 0x246360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246368u);
        ctx->pc = 0x246364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246360u;
        // 0x246364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246360u, 0x246368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x1000001b  b           . + 4 + (0x1B << 2)
label_24636c:
    if (ctx->pc == 0x24636Cu) {
        ctx->pc = 0x24636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246368u;
        // 0x24636c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246370u;
        goto label_246370;
    }
    ctx->pc = 0x246368u;
    {
        const bool branch_taken_0x246368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246368u;
        // 0x24636c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246368) {
            ctx->pc = 0x2463D8u;
            goto label_2463d8;
        }
    }
    ctx->pc = 0x246370u;
label_246370:
    // 0x246370: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_246374:
    // 0x246374: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x246374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_246378:
    // 0x246378: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_24637c:
    if (ctx->pc == 0x24637Cu) {
        ctx->pc = 0x24637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246378u;
        // 0x24637c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246380u;
        goto label_246380;
    }
    ctx->pc = 0x246378u;
    {
        const bool branch_taken_0x246378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246378u;
        // 0x24637c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246378) {
            ctx->pc = 0x2463D8u;
            goto label_2463d8;
        }
    }
    ctx->pc = 0x246380u;
label_246380:
    // 0x246380: 0xc4c012b0  lwc1        $f0, 0x12B0($a2)
    ctx->pc = 0x246380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246384:
    // 0x246384: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x246384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246388:
    // 0x246388: 0x0  nop
    ctx->pc = 0x246388u;
    // NOP
label_24638c:
    // 0x24638c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24638cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246390:
    // 0x246390: 0x0  nop
    ctx->pc = 0x246390u;
    // NOP
label_246394:
    // 0x246394: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_246398:
    if (ctx->pc == 0x246398u) {
        ctx->pc = 0x246398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246394u;
        // 0x246398: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24639Cu;
        goto label_24639c;
    }
    ctx->pc = 0x246394u;
    {
        const bool branch_taken_0x246394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246394u;
        // 0x246398: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246394) {
            ctx->pc = 0x2463A4u;
            goto label_2463a4;
        }
    }
    ctx->pc = 0x24639Cu;
label_24639c:
    // 0x24639c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24639cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2463a0:
    // 0x2463a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2463a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2463a4:
    // 0x2463a4: 0x0  nop
    ctx->pc = 0x2463a4u;
    // NOP
label_2463a8:
    // 0x2463a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2463a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2463ac:
    // 0x2463ac: 0x0  nop
    ctx->pc = 0x2463acu;
    // NOP
label_2463b0:
    // 0x2463b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2463b4:
    if (ctx->pc == 0x2463B4u) {
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463B8u;
        goto label_2463b8;
    }
    ctx->pc = 0x2463B0u;
    {
        const bool branch_taken_0x2463b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463b0) {
            ctx->pc = 0x2463D8u;
            goto label_2463d8;
        }
    }
    ctx->pc = 0x2463B8u;
label_2463b8:
    // 0x2463b8: 0x8ce20150  lw          $v0, 0x150($a3)
    ctx->pc = 0x2463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_2463bc:
    // 0x2463bc: 0x2442ffdd  addiu       $v0, $v0, -0x23
    ctx->pc = 0x2463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967261));
label_2463c0:
    // 0x2463c0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2463c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2463c4:
    // 0x2463c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2463c8:
    if (ctx->pc == 0x2463C8u) {
        ctx->pc = 0x2463CCu;
        goto label_2463cc;
    }
    ctx->pc = 0x2463C4u;
    {
        const bool branch_taken_0x2463c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463c4) {
            ctx->pc = 0x2463D8u;
            goto label_2463d8;
        }
    }
    ctx->pc = 0x2463CCu;
label_2463cc:
    // 0x2463cc: 0xc069ab8  jal         func_1A6AE0
label_2463d0:
    if (ctx->pc == 0x2463D0u) {
        ctx->pc = 0x2463D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463CCu;
        // 0x2463d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463D4u;
        goto label_2463d4;
    }
    ctx->pc = 0x2463CCu;
    SET_GPR_U32(ctx, 31, 0x2463D4u);
    ctx->pc = 0x2463D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463CCu;
    // 0x2463d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AE0u, 0x2463CCu, 0x2463D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463D4u;
label_2463d4:
    // 0x2463d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2463d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2463d8:
    // 0x2463d8: 0x3e00008  jr          $ra
label_2463dc:
    if (ctx->pc == 0x2463DCu) {
        ctx->pc = 0x2463DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D8u;
        // 0x2463dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463E0u;
        goto label_fallthrough_0x2463d8;
    }
    ctx->pc = 0x2463D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2463DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D8u;
        // 0x2463dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2463D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2463d8:
    ctx->pc = 0x2463E0u;
}
