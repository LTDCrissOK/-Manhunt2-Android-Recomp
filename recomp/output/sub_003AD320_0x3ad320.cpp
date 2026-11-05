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

// Function: sub_003AD320
// Address: 0x3ad320 - 0x3ad510
void sub_003AD320_0x3ad320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD320_0x3ad320");
#endif

    switch (ctx->pc) {
        case 0x3ad320u: goto label_3ad320;
        case 0x3ad324u: goto label_3ad324;
        case 0x3ad328u: goto label_3ad328;
        case 0x3ad32cu: goto label_3ad32c;
        case 0x3ad330u: goto label_3ad330;
        case 0x3ad334u: goto label_3ad334;
        case 0x3ad338u: goto label_3ad338;
        case 0x3ad33cu: goto label_3ad33c;
        case 0x3ad340u: goto label_3ad340;
        case 0x3ad344u: goto label_3ad344;
        case 0x3ad348u: goto label_3ad348;
        case 0x3ad34cu: goto label_3ad34c;
        case 0x3ad350u: goto label_3ad350;
        case 0x3ad354u: goto label_3ad354;
        case 0x3ad358u: goto label_3ad358;
        case 0x3ad35cu: goto label_3ad35c;
        case 0x3ad360u: goto label_3ad360;
        case 0x3ad364u: goto label_3ad364;
        case 0x3ad368u: goto label_3ad368;
        case 0x3ad36cu: goto label_3ad36c;
        case 0x3ad370u: goto label_3ad370;
        case 0x3ad374u: goto label_3ad374;
        case 0x3ad378u: goto label_3ad378;
        case 0x3ad37cu: goto label_3ad37c;
        case 0x3ad380u: goto label_3ad380;
        case 0x3ad384u: goto label_3ad384;
        case 0x3ad388u: goto label_3ad388;
        case 0x3ad38cu: goto label_3ad38c;
        case 0x3ad390u: goto label_3ad390;
        case 0x3ad394u: goto label_3ad394;
        case 0x3ad398u: goto label_3ad398;
        case 0x3ad39cu: goto label_3ad39c;
        case 0x3ad3a0u: goto label_3ad3a0;
        case 0x3ad3a4u: goto label_3ad3a4;
        case 0x3ad3a8u: goto label_3ad3a8;
        case 0x3ad3acu: goto label_3ad3ac;
        case 0x3ad3b0u: goto label_3ad3b0;
        case 0x3ad3b4u: goto label_3ad3b4;
        case 0x3ad3b8u: goto label_3ad3b8;
        case 0x3ad3bcu: goto label_3ad3bc;
        case 0x3ad3c0u: goto label_3ad3c0;
        case 0x3ad3c4u: goto label_3ad3c4;
        case 0x3ad3c8u: goto label_3ad3c8;
        case 0x3ad3ccu: goto label_3ad3cc;
        case 0x3ad3d0u: goto label_3ad3d0;
        case 0x3ad3d4u: goto label_3ad3d4;
        case 0x3ad3d8u: goto label_3ad3d8;
        case 0x3ad3dcu: goto label_3ad3dc;
        case 0x3ad3e0u: goto label_3ad3e0;
        case 0x3ad3e4u: goto label_3ad3e4;
        case 0x3ad3e8u: goto label_3ad3e8;
        case 0x3ad3ecu: goto label_3ad3ec;
        case 0x3ad3f0u: goto label_3ad3f0;
        case 0x3ad3f4u: goto label_3ad3f4;
        case 0x3ad3f8u: goto label_3ad3f8;
        case 0x3ad3fcu: goto label_3ad3fc;
        case 0x3ad400u: goto label_3ad400;
        case 0x3ad404u: goto label_3ad404;
        case 0x3ad408u: goto label_3ad408;
        case 0x3ad40cu: goto label_3ad40c;
        case 0x3ad410u: goto label_3ad410;
        case 0x3ad414u: goto label_3ad414;
        case 0x3ad418u: goto label_3ad418;
        case 0x3ad41cu: goto label_3ad41c;
        case 0x3ad420u: goto label_3ad420;
        case 0x3ad424u: goto label_3ad424;
        case 0x3ad428u: goto label_3ad428;
        case 0x3ad42cu: goto label_3ad42c;
        case 0x3ad430u: goto label_3ad430;
        case 0x3ad434u: goto label_3ad434;
        case 0x3ad438u: goto label_3ad438;
        case 0x3ad43cu: goto label_3ad43c;
        case 0x3ad440u: goto label_3ad440;
        case 0x3ad444u: goto label_3ad444;
        case 0x3ad448u: goto label_3ad448;
        case 0x3ad44cu: goto label_3ad44c;
        case 0x3ad450u: goto label_3ad450;
        case 0x3ad454u: goto label_3ad454;
        case 0x3ad458u: goto label_3ad458;
        case 0x3ad45cu: goto label_3ad45c;
        case 0x3ad460u: goto label_3ad460;
        case 0x3ad464u: goto label_3ad464;
        case 0x3ad468u: goto label_3ad468;
        case 0x3ad46cu: goto label_3ad46c;
        case 0x3ad470u: goto label_3ad470;
        case 0x3ad474u: goto label_3ad474;
        case 0x3ad478u: goto label_3ad478;
        case 0x3ad47cu: goto label_3ad47c;
        case 0x3ad480u: goto label_3ad480;
        case 0x3ad484u: goto label_3ad484;
        case 0x3ad488u: goto label_3ad488;
        case 0x3ad48cu: goto label_3ad48c;
        case 0x3ad490u: goto label_3ad490;
        case 0x3ad494u: goto label_3ad494;
        case 0x3ad498u: goto label_3ad498;
        case 0x3ad49cu: goto label_3ad49c;
        case 0x3ad4a0u: goto label_3ad4a0;
        case 0x3ad4a4u: goto label_3ad4a4;
        case 0x3ad4a8u: goto label_3ad4a8;
        case 0x3ad4acu: goto label_3ad4ac;
        case 0x3ad4b0u: goto label_3ad4b0;
        case 0x3ad4b4u: goto label_3ad4b4;
        case 0x3ad4b8u: goto label_3ad4b8;
        case 0x3ad4bcu: goto label_3ad4bc;
        case 0x3ad4c0u: goto label_3ad4c0;
        case 0x3ad4c4u: goto label_3ad4c4;
        case 0x3ad4c8u: goto label_3ad4c8;
        case 0x3ad4ccu: goto label_3ad4cc;
        case 0x3ad4d0u: goto label_3ad4d0;
        case 0x3ad4d4u: goto label_3ad4d4;
        case 0x3ad4d8u: goto label_3ad4d8;
        case 0x3ad4dcu: goto label_3ad4dc;
        case 0x3ad4e0u: goto label_3ad4e0;
        case 0x3ad4e4u: goto label_3ad4e4;
        case 0x3ad4e8u: goto label_3ad4e8;
        case 0x3ad4ecu: goto label_3ad4ec;
        case 0x3ad4f0u: goto label_3ad4f0;
        case 0x3ad4f4u: goto label_3ad4f4;
        case 0x3ad4f8u: goto label_3ad4f8;
        case 0x3ad4fcu: goto label_3ad4fc;
        case 0x3ad500u: goto label_3ad500;
        case 0x3ad504u: goto label_3ad504;
        case 0x3ad508u: goto label_3ad508;
        case 0x3ad50cu: goto label_3ad50c;
        default: break;
    }

    ctx->pc = 0x3ad320u;

label_3ad320:
    // 0x3ad320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad324:
    // 0x3ad324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ad324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ad328:
    // 0x3ad328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ad328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad32c:
    // 0x3ad32c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3ad330:
    if (ctx->pc == 0x3AD330u) {
        ctx->pc = 0x3AD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD32Cu;
        // 0x3ad330: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD334u;
        goto label_3ad334;
    }
    ctx->pc = 0x3AD32Cu;
    {
        const bool branch_taken_0x3ad32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD32Cu;
        // 0x3ad330: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad32c) {
            ctx->pc = 0x3AD360u;
            goto label_3ad360;
        }
    }
    ctx->pc = 0x3AD334u;
label_3ad334:
    // 0x3ad334: 0xc0ebe50  jal         func_3AF940
label_3ad338:
    if (ctx->pc == 0x3AD338u) {
        ctx->pc = 0x3AD33Cu;
        goto label_3ad33c;
    }
    ctx->pc = 0x3AD334u;
    SET_GPR_U32(ctx, 31, 0x3AD33Cu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x3AD334u, 0x3AD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD33Cu;
label_3ad33c:
    // 0x3ad33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad340:
    // 0x3ad340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad344:
    // 0x3ad344: 0xc0efab3  jal         func_3BEACC
label_3ad348:
    if (ctx->pc == 0x3AD348u) {
        ctx->pc = 0x3AD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD344u;
        // 0x3ad348: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD34Cu;
        goto label_3ad34c;
    }
    ctx->pc = 0x3AD344u;
    SET_GPR_U32(ctx, 31, 0x3AD34Cu);
    ctx->pc = 0x3AD348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD344u;
    // 0x3ad348: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD344u, 0x3AD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD34Cu;
label_3ad34c:
    // 0x3ad34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad350:
    // 0x3ad350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ad350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ad354:
    // 0x3ad354: 0x80ebe56  j           func_3AF958
label_3ad358:
    if (ctx->pc == 0x3AD358u) {
        ctx->pc = 0x3AD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD354u;
        // 0x3ad358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD35Cu;
        goto label_3ad35c;
    }
    ctx->pc = 0x3AD354u;
    ctx->pc = 0x3AD358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD354u;
    // 0x3ad358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x3AD35Cu;
label_3ad35c:
    // 0x3ad35c: 0x0  nop
    ctx->pc = 0x3ad35cu;
    // NOP
label_3ad360:
    // 0x3ad360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad364:
    // 0x3ad364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ad364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ad368:
    // 0x3ad368: 0x3e00008  jr          $ra
label_3ad36c:
    if (ctx->pc == 0x3AD36Cu) {
        ctx->pc = 0x3AD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD368u;
        // 0x3ad36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD370u;
        goto label_3ad370;
    }
    ctx->pc = 0x3AD368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD368u;
        // 0x3ad36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD370u;
label_3ad370:
    // 0x3ad370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ad370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ad374:
    // 0x3ad374: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ad374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3ad378:
    // 0x3ad378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad37c:
    // 0x3ad37c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ad37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3ad380:
    // 0x3ad380: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad384:
    // 0x3ad384: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ad384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3ad388:
    // 0x3ad388: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3ad388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3ad38c:
    // 0x3ad38c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ad38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ad390:
    // 0x3ad390: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x3ad390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3ad394:
    // 0x3ad394: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_3ad398:
    if (ctx->pc == 0x3AD398u) {
        ctx->pc = 0x3AD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD394u;
        // 0x3ad398: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD39Cu;
        goto label_3ad39c;
    }
    ctx->pc = 0x3AD394u;
    {
        const bool branch_taken_0x3ad394 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD394u;
        // 0x3ad398: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad394) {
            ctx->pc = 0x3AD3BCu;
            goto label_3ad3bc;
        }
    }
    ctx->pc = 0x3AD39Cu;
label_3ad39c:
    // 0x3ad39c: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x3ad39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_3ad3a0:
    // 0x3ad3a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3ad3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3ad3a4:
    // 0x3ad3a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ad3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ad3a8:
    // 0x3ad3a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad3ac:
    // 0x3ad3ac: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x3ad3acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3ad3b0:
    // 0x3ad3b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ad3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad3b4:
    // 0x3ad3b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3ad3b8:
    if (ctx->pc == 0x3AD3B8u) {
        ctx->pc = 0x3AD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B4u;
        // 0x3ad3b8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3BCu;
        goto label_3ad3bc;
    }
    ctx->pc = 0x3AD3B4u;
    {
        const bool branch_taken_0x3ad3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B4u;
        // 0x3ad3b8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3b4) {
            ctx->pc = 0x3AD3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad3a0;
        }
    }
    ctx->pc = 0x3AD3BCu;
label_3ad3bc:
    // 0x3ad3bc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3ad3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3ad3c0:
    // 0x3ad3c0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x3ad3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_3ad3c4:
    // 0x3ad3c4: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_3ad3c8:
    if (ctx->pc == 0x3AD3C8u) {
        ctx->pc = 0x3AD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3C4u;
        // 0x3ad3c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3CCu;
        goto label_3ad3cc;
    }
    ctx->pc = 0x3AD3C4u;
    {
        const bool branch_taken_0x3ad3c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3C4u;
        // 0x3ad3c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3c4) {
            ctx->pc = 0x3AD458u;
            goto label_3ad458;
        }
    }
    ctx->pc = 0x3AD3CCu;
label_3ad3cc:
    // 0x3ad3cc: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x3ad3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3ad3d0:
    // 0x3ad3d0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3ad3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ad3d4:
    // 0x3ad3d4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ad3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3ad3d8:
    // 0x3ad3d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad3dc:
    // 0x3ad3dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad3e0:
    // 0x3ad3e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3ad3e4:
    // 0x3ad3e4: 0x40f809  jalr        $v0
label_3ad3e8:
    if (ctx->pc == 0x3AD3E8u) {
        ctx->pc = 0x3AD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3E4u;
        // 0x3ad3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3ECu;
        goto label_3ad3ec;
    }
    ctx->pc = 0x3AD3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD3ECu);
        ctx->pc = 0x3AD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3E4u;
        // 0x3ad3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD3E4u, 0x3AD3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD3ECu;
label_3ad3ec:
    // 0x3ad3ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad3f0:
    // 0x3ad3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad3f4:
    // 0x3ad3f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3ad3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3ad3f8:
    // 0x3ad3f8: 0x40f809  jalr        $v0
label_3ad3fc:
    if (ctx->pc == 0x3AD3FCu) {
        ctx->pc = 0x3AD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3F8u;
        // 0x3ad3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD400u;
        goto label_3ad400;
    }
    ctx->pc = 0x3AD3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD400u);
        ctx->pc = 0x3AD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3F8u;
        // 0x3ad3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD3F8u, 0x3AD400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD400u;
label_3ad400:
    // 0x3ad400: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad404:
    // 0x3ad404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ad404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad408:
    // 0x3ad408: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ad408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ad40c:
    // 0x3ad40c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ad40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ad410:
    // 0x3ad410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad414:
    // 0x3ad414: 0x40f809  jalr        $v0
label_3ad418:
    if (ctx->pc == 0x3AD418u) {
        ctx->pc = 0x3AD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD414u;
        // 0x3ad418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD41Cu;
        goto label_3ad41c;
    }
    ctx->pc = 0x3AD414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD41Cu);
        ctx->pc = 0x3AD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD414u;
        // 0x3ad418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD414u, 0x3AD41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD41Cu;
label_3ad41c:
    // 0x3ad41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad420:
    // 0x3ad420: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ad420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad424:
    // 0x3ad424: 0xc0efab3  jal         func_3BEACC
label_3ad428:
    if (ctx->pc == 0x3AD428u) {
        ctx->pc = 0x3AD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD424u;
        // 0x3ad428: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD42Cu;
        goto label_3ad42c;
    }
    ctx->pc = 0x3AD424u;
    SET_GPR_U32(ctx, 31, 0x3AD42Cu);
    ctx->pc = 0x3AD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD424u;
    // 0x3ad428: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD424u, 0x3AD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD42Cu;
label_3ad42c:
    // 0x3ad42c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad430:
    // 0x3ad430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad434:
    // 0x3ad434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad438:
    // 0x3ad438: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3ad43c:
    // 0x3ad43c: 0x40f809  jalr        $v0
label_3ad440:
    if (ctx->pc == 0x3AD440u) {
        ctx->pc = 0x3AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD43Cu;
        // 0x3ad440: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD444u;
        goto label_3ad444;
    }
    ctx->pc = 0x3AD43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD444u);
        ctx->pc = 0x3AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD43Cu;
        // 0x3ad440: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD43Cu, 0x3AD444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD444u;
label_3ad444:
    // 0x3ad444: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x3ad444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3ad448:
    // 0x3ad448: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ad448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad44c:
    // 0x3ad44c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3ad450:
    if (ctx->pc == 0x3AD450u) {
        ctx->pc = 0x3AD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD44Cu;
        // 0x3ad450: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD454u;
        goto label_3ad454;
    }
    ctx->pc = 0x3AD44Cu;
    {
        const bool branch_taken_0x3ad44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD44Cu;
        // 0x3ad450: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad44c) {
            ctx->pc = 0x3AD3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad3d0;
        }
    }
    ctx->pc = 0x3AD454u;
label_3ad454:
    // 0x3ad454: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3ad454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3ad458:
    // 0x3ad458: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_3ad45c:
    if (ctx->pc == 0x3AD45Cu) {
        ctx->pc = 0x3AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD458u;
        // 0x3ad45c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD460u;
        goto label_3ad460;
    }
    ctx->pc = 0x3AD458u;
    {
        const bool branch_taken_0x3ad458 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD458u;
        // 0x3ad45c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad458) {
            ctx->pc = 0x3AD4E8u;
            goto label_3ad4e8;
        }
    }
    ctx->pc = 0x3AD460u;
label_3ad460:
    // 0x3ad460: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x3ad460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3ad464:
    // 0x3ad464: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3ad464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ad468:
    // 0x3ad468: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ad468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3ad46c:
    // 0x3ad46c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad470:
    // 0x3ad470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad474:
    // 0x3ad474: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ad474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3ad478:
    // 0x3ad478: 0x40f809  jalr        $v0
label_3ad47c:
    if (ctx->pc == 0x3AD47Cu) {
        ctx->pc = 0x3AD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD478u;
        // 0x3ad47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD480u;
        goto label_3ad480;
    }
    ctx->pc = 0x3AD478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD480u);
        ctx->pc = 0x3AD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD478u;
        // 0x3ad47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD478u, 0x3AD480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD480u;
label_3ad480:
    // 0x3ad480: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad484:
    // 0x3ad484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad488:
    // 0x3ad488: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3ad48c:
    // 0x3ad48c: 0x40f809  jalr        $v0
label_3ad490:
    if (ctx->pc == 0x3AD490u) {
        ctx->pc = 0x3AD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD48Cu;
        // 0x3ad490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD494u;
        goto label_3ad494;
    }
    ctx->pc = 0x3AD48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD494u);
        ctx->pc = 0x3AD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD48Cu;
        // 0x3ad490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD48Cu, 0x3AD494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD494u;
label_3ad494:
    // 0x3ad494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad498:
    // 0x3ad498: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ad498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad49c:
    // 0x3ad49c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ad49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4a0:
    // 0x3ad4a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ad4a4:
    // 0x3ad4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4a8:
    // 0x3ad4a8: 0x40f809  jalr        $v0
label_3ad4ac:
    if (ctx->pc == 0x3AD4ACu) {
        ctx->pc = 0x3AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4A8u;
        // 0x3ad4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4B0u;
        goto label_3ad4b0;
    }
    ctx->pc = 0x3AD4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD4B0u);
        ctx->pc = 0x3AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4A8u;
        // 0x3ad4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD4A8u, 0x3AD4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD4B0u;
label_3ad4b0:
    // 0x3ad4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4b4:
    // 0x3ad4b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ad4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad4b8:
    // 0x3ad4b8: 0xc0efab3  jal         func_3BEACC
label_3ad4bc:
    if (ctx->pc == 0x3AD4BCu) {
        ctx->pc = 0x3AD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4B8u;
        // 0x3ad4bc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4C0u;
        goto label_3ad4c0;
    }
    ctx->pc = 0x3AD4B8u;
    SET_GPR_U32(ctx, 31, 0x3AD4C0u);
    ctx->pc = 0x3AD4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4B8u;
    // 0x3ad4bc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD4B8u, 0x3AD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4C0u;
label_3ad4c0:
    // 0x3ad4c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3ad4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad4c4:
    // 0x3ad4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4c8:
    // 0x3ad4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4cc:
    // 0x3ad4cc: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x3ad4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3ad4d0:
    // 0x3ad4d0: 0x60f809  jalr        $v1
label_3ad4d4:
    if (ctx->pc == 0x3AD4D4u) {
        ctx->pc = 0x3AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4D0u;
        // 0x3ad4d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4D8u;
        goto label_3ad4d8;
    }
    ctx->pc = 0x3AD4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD4D8u);
        ctx->pc = 0x3AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4D0u;
        // 0x3ad4d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD4D0u, 0x3AD4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD4D8u;
label_3ad4d8:
    // 0x3ad4d8: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x3ad4d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3ad4dc:
    // 0x3ad4dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ad4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad4e0:
    // 0x3ad4e0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_3ad4e4:
    if (ctx->pc == 0x3AD4E4u) {
        ctx->pc = 0x3AD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4E0u;
        // 0x3ad4e4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4E8u;
        goto label_3ad4e8;
    }
    ctx->pc = 0x3AD4E0u;
    {
        const bool branch_taken_0x3ad4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad4e0) {
            ctx->pc = 0x3AD4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD4E0u;
            // 0x3ad4e4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad468;
        }
    }
    ctx->pc = 0x3AD4E8u;
label_3ad4e8:
    // 0x3ad4e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ad4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ad4ec:
    // 0x3ad4ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ad4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad4f0:
    // 0x3ad4f0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3ad4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_3ad4f4:
    // 0x3ad4f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ad4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad4f8:
    // 0x3ad4f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ad4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ad4fc:
    // 0x3ad4fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ad4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ad500:
    // 0x3ad500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ad500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad504:
    // 0x3ad504: 0x3e00008  jr          $ra
label_3ad508:
    if (ctx->pc == 0x3AD508u) {
        ctx->pc = 0x3AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD504u;
        // 0x3ad508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD50Cu;
        goto label_3ad50c;
    }
    ctx->pc = 0x3AD504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD504u;
        // 0x3ad508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD50Cu;
label_3ad50c:
    // 0x3ad50c: 0x0  nop
    ctx->pc = 0x3ad50cu;
    // NOP
    ctx->pc = 0x3ad510u;
}
