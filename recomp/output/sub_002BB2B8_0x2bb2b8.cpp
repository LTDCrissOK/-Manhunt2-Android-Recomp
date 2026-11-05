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

// Function: sub_002BB2B8
// Address: 0x2bb2b8 - 0x2bb450
void sub_002BB2B8_0x2bb2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB2B8_0x2bb2b8");
#endif

    switch (ctx->pc) {
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb434u: goto label_2bb434;
        default: break;
    }

    ctx->pc = 0x2bb2b8u;

    // 0x2bb2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb2bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2bb2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2bb2c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2bb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2bb2c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bb2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bb2cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2bb2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2bb2d4: 0xc0a21cc  jal         func_288730
    ctx->pc = 0x2BB2D4u;
    SET_GPR_U32(ctx, 31, 0x2BB2DCu);
    ctx->pc = 0x2BB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2D4u;
    // 0x2bb2d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288730u, 0x2BB2D4u, 0x2BB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2DCu;
label_2bb2dc:
    // 0x2bb2dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB2DCu;
    {
        const bool branch_taken_0x2bb2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2dc) {
            ctx->pc = 0x2BB2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB2DCu;
            // 0x2bb2e0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2ECu;
            goto label_2bb2ec;
        }
    }
    ctx->pc = 0x2BB2E4u;
    // 0x2bb2e4: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2BB2E4u;
    {
        const bool branch_taken_0x2bb2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2E4u;
        // 0x2bb2e8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2e4) {
            ctx->pc = 0x2BB434u;
            goto label_2bb434;
        }
    }
    ctx->pc = 0x2BB2ECu;
label_2bb2ec:
    // 0x2bb2ec: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2bb2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2bb2f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bb2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2f4: 0x24a5ef58  addiu       $a1, $a1, -0x10A8
    ctx->pc = 0x2bb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963032));
    // 0x2bb2f8: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x2BB2F8u;
    SET_GPR_U32(ctx, 31, 0x2BB300u);
    ctx->pc = 0x2BB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2F8u;
    // 0x2bb2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2BB2F8u, 0x2BB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB300u;
label_2bb300:
    // 0x2bb300: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2bb300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2bb304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb308: 0x24c60138  addiu       $a2, $a2, 0x138
    ctx->pc = 0x2bb308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 312));
    // 0x2bb30c: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x2BB30Cu;
    SET_GPR_U32(ctx, 31, 0x2BB314u);
    ctx->pc = 0x2BB310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB30Cu;
    // 0x2bb310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2BB30Cu, 0x2BB314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB314u;
label_2bb314:
    // 0x2bb314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb318: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BB318u;
    SET_GPR_U32(ctx, 31, 0x2BB320u);
    ctx->pc = 0x2BB31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB318u;
    // 0x2bb31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BB318u, 0x2BB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB320u;
label_2bb320:
    // 0x2bb320: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2bb320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2bb324: 0x8c4425a4  lw          $a0, 0x25A4($v0)
    ctx->pc = 0x2bb324u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C25A4u));
    // 0x2bb328: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2bb328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2bb32c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BB32Cu;
    {
        const bool branch_taken_0x2bb32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB32Cu;
        // 0x2bb330: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb32c) {
            ctx->pc = 0x2BB3BCu;
            goto label_2bb3bc;
        }
    }
    ctx->pc = 0x2BB334u;
    // 0x2bb334: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bb334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bb338: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x2bb338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2bb33c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb340: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb344: 0x800008  jr          $a0
    ctx->pc = 0x2BB344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BB34Cu: goto label_2bb34c;
            case 0x2BB364u: goto label_2bb364;
            case 0x2BB37Cu: goto label_2bb37c;
            case 0x2BB394u: goto label_2bb394;
            case 0x2BB3ACu: goto label_2bb3ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB344u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BB34Cu;
label_2bb34c:
    // 0x2bb34c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb354: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB354u;
    SET_GPR_U32(ctx, 31, 0x2BB35Cu);
    ctx->pc = 0x2BB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB354u;
    // 0x2bb358: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB354u, 0x2BB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB35Cu;
label_2bb35c:
    // 0x2bb35c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2BB35Cu;
    {
        const bool branch_taken_0x2bb35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB35Cu;
        // 0x2bb360: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb35c) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB364u;
label_2bb364:
    // 0x2bb364: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb368: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb36c: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB36Cu;
    SET_GPR_U32(ctx, 31, 0x2BB374u);
    ctx->pc = 0x2BB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB36Cu;
    // 0x2bb370: 0x24a50148  addiu       $a1, $a1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB36Cu, 0x2BB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB374u;
label_2bb374:
    // 0x2bb374: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB374u;
    {
        const bool branch_taken_0x2bb374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB374u;
        // 0x2bb378: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb374) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB37Cu;
label_2bb37c:
    // 0x2bb37c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb384: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB384u;
    SET_GPR_U32(ctx, 31, 0x2BB38Cu);
    ctx->pc = 0x2BB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB384u;
    // 0x2bb388: 0x24a50150  addiu       $a1, $a1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB384u, 0x2BB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB38Cu;
label_2bb38c:
    // 0x2bb38c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BB38Cu;
    {
        const bool branch_taken_0x2bb38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB38Cu;
        // 0x2bb390: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb38c) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB394u;
label_2bb394:
    // 0x2bb394: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb39c: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB39Cu;
    SET_GPR_U32(ctx, 31, 0x2BB3A4u);
    ctx->pc = 0x2BB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB39Cu;
    // 0x2bb3a0: 0x24a50158  addiu       $a1, $a1, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB39Cu, 0x2BB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3A4u;
label_2bb3a4:
    // 0x2bb3a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB3A4u;
    {
        const bool branch_taken_0x2bb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3A4u;
        // 0x2bb3a8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3a4) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB3ACu;
label_2bb3ac:
    // 0x2bb3ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3b4: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB3B4u;
    SET_GPR_U32(ctx, 31, 0x2BB3BCu);
    ctx->pc = 0x2BB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3B4u;
    // 0x2bb3b8: 0x24a50160  addiu       $a1, $a1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB3B4u, 0x2BB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3BCu;
label_2bb3bc:
    // 0x2bb3bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2bb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2bb3c0:
    // 0x2bb3c0: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
    // 0x2bb3c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bb3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bb3c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB3C8u;
    {
        const bool branch_taken_0x2bb3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3c8) {
            ctx->pc = 0x2BB3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3C8u;
            // 0x2bb3cc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB3E4u;
            goto label_2bb3e4;
        }
    }
    ctx->pc = 0x2BB3D0u;
    // 0x2bb3d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb3d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3d8: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB3D8u;
    SET_GPR_U32(ctx, 31, 0x2BB3E0u);
    ctx->pc = 0x2BB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3D8u;
    // 0x2bb3dc: 0x24a500f0  addiu       $a1, $a1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB3D8u, 0x2BB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3E0u;
label_2bb3e0:
    // 0x2bb3e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2bb3e4:
    // 0x2bb3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3e8: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BB3E8u;
    SET_GPR_U32(ctx, 31, 0x2BB3F0u);
    ctx->pc = 0x2BB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3E8u;
    // 0x2bb3ec: 0x24a50168  addiu       $a1, $a1, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BB3E8u, 0x2BB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3F0u;
label_2bb3f0:
    // 0x2bb3f0: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x2BB3F0u;
    SET_GPR_U32(ctx, 31, 0x2BB3F8u);
    ctx->pc = 0x2BB3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3F0u;
    // 0x2bb3f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x2BB3F0u, 0x2BB3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3F8u;
label_2bb3f8:
    // 0x2bb3f8: 0xc09dc80  jal         func_277200
    ctx->pc = 0x2BB3F8u;
    SET_GPR_U32(ctx, 31, 0x2BB400u);
    ctx->pc = 0x2BB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3F8u;
    // 0x2bb3fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x2BB3F8u, 0x2BB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB400u;
label_2bb400:
    // 0x2bb400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB400u;
    {
        const bool branch_taken_0x2bb400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB400u;
        // 0x2bb404: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb400) {
            ctx->pc = 0x2BB428u;
            goto label_2bb428;
        }
    }
    ctx->pc = 0x2BB408u;
    // 0x2bb408: 0xc0aeb26  jal         func_2BAC98
    ctx->pc = 0x2BB408u;
    SET_GPR_U32(ctx, 31, 0x2BB410u);
    ctx->pc = 0x2BB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB408u;
    // 0x2bb40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC98u, 0x2BB408u, 0x2BB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB410u;
label_2bb410:
    // 0x2bb410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb418: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BB418u;
    SET_GPR_U32(ctx, 31, 0x2BB420u);
    ctx->pc = 0x2BB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB418u;
    // 0x2bb41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BB418u, 0x2BB420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB420u;
label_2bb420:
    // 0x2bb420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB420u;
    {
        const bool branch_taken_0x2bb420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB420u;
        // 0x2bb424: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb420) {
            ctx->pc = 0x2BB438u;
            goto label_2bb438;
        }
    }
    ctx->pc = 0x2BB428u;
label_2bb428:
    // 0x2bb428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb42c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BB42Cu;
    SET_GPR_U32(ctx, 31, 0x2BB434u);
    ctx->pc = 0x2BB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB42Cu;
    // 0x2bb430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BB42Cu, 0x2BB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB434u;
label_2bb434:
    // 0x2bb434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb438:
    // 0x2bb438: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2bb438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb43c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2bb43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bb440: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bb440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb444: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2bb444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2bb448: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB448u;
        // 0x2bb44c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB450u;
}
