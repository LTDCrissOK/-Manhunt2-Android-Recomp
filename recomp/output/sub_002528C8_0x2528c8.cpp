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

// Function: sub_002528C8
// Address: 0x2528c8 - 0x252a20
void sub_002528C8_0x2528c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002528C8_0x2528c8");
#endif

    switch (ctx->pc) {
        case 0x2528c8u: goto label_2528c8;
        case 0x2528ccu: goto label_2528cc;
        case 0x2528d0u: goto label_2528d0;
        case 0x2528d4u: goto label_2528d4;
        case 0x2528d8u: goto label_2528d8;
        case 0x2528dcu: goto label_2528dc;
        case 0x2528e0u: goto label_2528e0;
        case 0x2528e4u: goto label_2528e4;
        case 0x2528e8u: goto label_2528e8;
        case 0x2528ecu: goto label_2528ec;
        case 0x2528f0u: goto label_2528f0;
        case 0x2528f4u: goto label_2528f4;
        case 0x2528f8u: goto label_2528f8;
        case 0x2528fcu: goto label_2528fc;
        case 0x252900u: goto label_252900;
        case 0x252904u: goto label_252904;
        case 0x252908u: goto label_252908;
        case 0x25290cu: goto label_25290c;
        case 0x252910u: goto label_252910;
        case 0x252914u: goto label_252914;
        case 0x252918u: goto label_252918;
        case 0x25291cu: goto label_25291c;
        case 0x252920u: goto label_252920;
        case 0x252924u: goto label_252924;
        case 0x252928u: goto label_252928;
        case 0x25292cu: goto label_25292c;
        case 0x252930u: goto label_252930;
        case 0x252934u: goto label_252934;
        case 0x252938u: goto label_252938;
        case 0x25293cu: goto label_25293c;
        case 0x252940u: goto label_252940;
        case 0x252944u: goto label_252944;
        case 0x252948u: goto label_252948;
        case 0x25294cu: goto label_25294c;
        case 0x252950u: goto label_252950;
        case 0x252954u: goto label_252954;
        case 0x252958u: goto label_252958;
        case 0x25295cu: goto label_25295c;
        case 0x252960u: goto label_252960;
        case 0x252964u: goto label_252964;
        case 0x252968u: goto label_252968;
        case 0x25296cu: goto label_25296c;
        case 0x252970u: goto label_252970;
        case 0x252974u: goto label_252974;
        case 0x252978u: goto label_252978;
        case 0x25297cu: goto label_25297c;
        case 0x252980u: goto label_252980;
        case 0x252984u: goto label_252984;
        case 0x252988u: goto label_252988;
        case 0x25298cu: goto label_25298c;
        case 0x252990u: goto label_252990;
        case 0x252994u: goto label_252994;
        case 0x252998u: goto label_252998;
        case 0x25299cu: goto label_25299c;
        case 0x2529a0u: goto label_2529a0;
        case 0x2529a4u: goto label_2529a4;
        case 0x2529a8u: goto label_2529a8;
        case 0x2529acu: goto label_2529ac;
        case 0x2529b0u: goto label_2529b0;
        case 0x2529b4u: goto label_2529b4;
        case 0x2529b8u: goto label_2529b8;
        case 0x2529bcu: goto label_2529bc;
        case 0x2529c0u: goto label_2529c0;
        case 0x2529c4u: goto label_2529c4;
        case 0x2529c8u: goto label_2529c8;
        case 0x2529ccu: goto label_2529cc;
        case 0x2529d0u: goto label_2529d0;
        case 0x2529d4u: goto label_2529d4;
        case 0x2529d8u: goto label_2529d8;
        case 0x2529dcu: goto label_2529dc;
        case 0x2529e0u: goto label_2529e0;
        case 0x2529e4u: goto label_2529e4;
        case 0x2529e8u: goto label_2529e8;
        case 0x2529ecu: goto label_2529ec;
        case 0x2529f0u: goto label_2529f0;
        case 0x2529f4u: goto label_2529f4;
        case 0x2529f8u: goto label_2529f8;
        case 0x2529fcu: goto label_2529fc;
        case 0x252a00u: goto label_252a00;
        case 0x252a04u: goto label_252a04;
        case 0x252a08u: goto label_252a08;
        case 0x252a0cu: goto label_252a0c;
        case 0x252a10u: goto label_252a10;
        case 0x252a14u: goto label_252a14;
        case 0x252a18u: goto label_252a18;
        case 0x252a1cu: goto label_252a1c;
        default: break;
    }

    ctx->pc = 0x2528c8u;

label_2528c8:
    // 0x2528c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2528c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2528cc:
    // 0x2528cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2528ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2528d0:
    // 0x2528d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2528d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2528d4:
    // 0x2528d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2528d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2528d8:
    // 0x2528d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2528d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2528dc:
    // 0x2528dc: 0xc095512  jal         func_255448
label_2528e0:
    if (ctx->pc == 0x2528E0u) {
        ctx->pc = 0x2528E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528DCu;
        // 0x2528e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528E4u;
        goto label_2528e4;
    }
    ctx->pc = 0x2528DCu;
    SET_GPR_U32(ctx, 31, 0x2528E4u);
    ctx->pc = 0x2528E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528DCu;
    // 0x2528e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255448u, 0x2528DCu, 0x2528E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528E4u;
label_2528e4:
    // 0x2528e4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_2528e8:
    if (ctx->pc == 0x2528E8u) {
        ctx->pc = 0x2528E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528E4u;
        // 0x2528e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528ECu;
        goto label_2528ec;
    }
    ctx->pc = 0x2528E4u;
    {
        const bool branch_taken_0x2528e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2528e4) {
            ctx->pc = 0x2528E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528E4u;
            // 0x2528e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A0Cu;
            goto label_252a0c;
        }
    }
    ctx->pc = 0x2528ECu;
label_2528ec:
    // 0x2528ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2528ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2528f0:
    // 0x2528f0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2528f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_2528f4:
    // 0x2528f4: 0xc08fed2  jal         func_23FB48
label_2528f8:
    if (ctx->pc == 0x2528F8u) {
        ctx->pc = 0x2528F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528F4u;
        // 0x2528f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528FCu;
        goto label_2528fc;
    }
    ctx->pc = 0x2528F4u;
    SET_GPR_U32(ctx, 31, 0x2528FCu);
    ctx->pc = 0x2528F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528F4u;
    // 0x2528f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2528F4u, 0x2528FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528FCu;
label_2528fc:
    // 0x2528fc: 0xc06dc8e  jal         func_1B7238
label_252900:
    if (ctx->pc == 0x252900u) {
        ctx->pc = 0x252900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528FCu;
        // 0x252900: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252904u;
        goto label_252904;
    }
    ctx->pc = 0x2528FCu;
    SET_GPR_U32(ctx, 31, 0x252904u);
    ctx->pc = 0x252900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528FCu;
    // 0x252900: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7238u, 0x2528FCu, 0x252904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252904u;
label_252904:
    // 0x252904: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_252908:
    if (ctx->pc == 0x252908u) {
        ctx->pc = 0x252908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252904u;
        // 0x252908: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25290Cu;
        goto label_25290c;
    }
    ctx->pc = 0x252904u;
    {
        const bool branch_taken_0x252904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252904) {
            ctx->pc = 0x252908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252904u;
            // 0x252908: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252938u;
            goto label_252938;
        }
    }
    ctx->pc = 0x25290Cu;
label_25290c:
    // 0x25290c: 0x8e030ff0  lw          $v1, 0xFF0($s0)
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252910:
    // 0x252910: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x252910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_252914:
    // 0x252914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_252918:
    if (ctx->pc == 0x252918u) {
        ctx->pc = 0x252918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252914u;
        // 0x252918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25291Cu;
        goto label_25291c;
    }
    ctx->pc = 0x252914u;
    {
        const bool branch_taken_0x252914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252914u;
        // 0x252918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252914) {
            ctx->pc = 0x252928u;
            goto label_252928;
        }
    }
    ctx->pc = 0x25291Cu;
label_25291c:
    // 0x25291c: 0x8c620218  lw          $v0, 0x218($v1)
    ctx->pc = 0x25291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
label_252920:
    // 0x252920: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_252924:
    if (ctx->pc == 0x252924u) {
        ctx->pc = 0x252924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252920u;
        // 0x252924: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252928u;
        goto label_252928;
    }
    ctx->pc = 0x252920u;
    {
        const bool branch_taken_0x252920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252920) {
            ctx->pc = 0x252924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252920u;
            // 0x252924: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252938u;
            goto label_252938;
        }
    }
    ctx->pc = 0x252928u;
label_252928:
    // 0x252928: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x252928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25292c:
    // 0x25292c: 0xc08fed2  jal         func_23FB48
label_252930:
    if (ctx->pc == 0x252930u) {
        ctx->pc = 0x252930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25292Cu;
        // 0x252930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252934u;
        goto label_252934;
    }
    ctx->pc = 0x25292Cu;
    SET_GPR_U32(ctx, 31, 0x252934u);
    ctx->pc = 0x252930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25292Cu;
    // 0x252930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x25292Cu, 0x252934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252934u;
label_252934:
    // 0x252934: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x252934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252938:
    // 0x252938: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_25293c:
    // 0x25293c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_252940:
    if (ctx->pc == 0x252940u) {
        ctx->pc = 0x252940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25293Cu;
        // 0x252940: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252944u;
        goto label_252944;
    }
    ctx->pc = 0x25293Cu;
    {
        const bool branch_taken_0x25293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25293Cu;
        // 0x252940: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25293c) {
            ctx->pc = 0x252964u;
            goto label_252964;
        }
    }
    ctx->pc = 0x252944u;
label_252944:
    // 0x252944: 0xc06e0f0  jal         func_1B83C0
label_252948:
    if (ctx->pc == 0x252948u) {
        ctx->pc = 0x252948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252944u;
        // 0x252948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25294Cu;
        goto label_25294c;
    }
    ctx->pc = 0x252944u;
    SET_GPR_U32(ctx, 31, 0x25294Cu);
    ctx->pc = 0x252948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252944u;
    // 0x252948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x252944u, 0x25294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25294Cu;
label_25294c:
    // 0x25294c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_252950:
    if (ctx->pc == 0x252950u) {
        ctx->pc = 0x252954u;
        goto label_252954;
    }
    ctx->pc = 0x25294Cu;
    {
        const bool branch_taken_0x25294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25294c) {
            ctx->pc = 0x25295Cu;
            goto label_25295c;
        }
    }
    ctx->pc = 0x252954u;
label_252954:
    // 0x252954: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x252954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_252958:
    // 0x252958: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x252958u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25295c:
    // 0x25295c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_252960:
    if (ctx->pc == 0x252960u) {
        ctx->pc = 0x252964u;
        goto label_252964;
    }
    ctx->pc = 0x25295Cu;
    {
        const bool branch_taken_0x25295c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x25295c) {
            ctx->pc = 0x252974u;
            goto label_252974;
        }
    }
    ctx->pc = 0x252964u;
label_252964:
    // 0x252964: 0xc0954d0  jal         func_255340
label_252968:
    if (ctx->pc == 0x252968u) {
        ctx->pc = 0x252968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252964u;
        // 0x252968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25296Cu;
        goto label_25296c;
    }
    ctx->pc = 0x252964u;
    SET_GPR_U32(ctx, 31, 0x25296Cu);
    ctx->pc = 0x252968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252964u;
    // 0x252968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255340u, 0x252964u, 0x25296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25296Cu;
label_25296c:
    // 0x25296c: 0x10000004  b           . + 4 + (0x4 << 2)
label_252970:
    if (ctx->pc == 0x252970u) {
        ctx->pc = 0x252970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25296Cu;
        // 0x252970: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252974u;
        goto label_252974;
    }
    ctx->pc = 0x25296Cu;
    {
        const bool branch_taken_0x25296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25296Cu;
        // 0x252970: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25296c) {
            ctx->pc = 0x252980u;
            goto label_252980;
        }
    }
    ctx->pc = 0x252974u;
label_252974:
    // 0x252974: 0xc0954cc  jal         func_255330
label_252978:
    if (ctx->pc == 0x252978u) {
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25297Cu;
        goto label_25297c;
    }
    ctx->pc = 0x252974u;
    SET_GPR_U32(ctx, 31, 0x25297Cu);
    ctx->pc = 0x252978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252974u;
    // 0x252978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255330u, 0x252974u, 0x25297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25297Cu;
label_25297c:
    // 0x25297c: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x25297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_252980:
    // 0x252980: 0xc072890  jal         func_1CA240
label_252984:
    if (ctx->pc == 0x252984u) {
        ctx->pc = 0x252984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252980u;
        // 0x252984: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252988u;
        goto label_252988;
    }
    ctx->pc = 0x252980u;
    SET_GPR_U32(ctx, 31, 0x252988u);
    ctx->pc = 0x252984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252980u;
    // 0x252984: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA240u, 0x252980u, 0x252988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252988u;
label_252988:
    // 0x252988: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_25298c:
    if (ctx->pc == 0x25298Cu) {
        ctx->pc = 0x252990u;
        goto label_252990;
    }
    ctx->pc = 0x252988u;
    {
        const bool branch_taken_0x252988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252988) {
            ctx->pc = 0x2529A4u;
            goto label_2529a4;
        }
    }
    ctx->pc = 0x252990u;
label_252990:
    // 0x252990: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_252994:
    // 0x252994: 0xc072898  jal         func_1CA260
label_252998:
    if (ctx->pc == 0x252998u) {
        ctx->pc = 0x252998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252994u;
        // 0x252998: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25299Cu;
        goto label_25299c;
    }
    ctx->pc = 0x252994u;
    SET_GPR_U32(ctx, 31, 0x25299Cu);
    ctx->pc = 0x252998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252994u;
    // 0x252998: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA260u, 0x252994u, 0x25299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25299Cu;
label_25299c:
    // 0x25299c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2529a0:
    if (ctx->pc == 0x2529A0u) {
        ctx->pc = 0x2529A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25299Cu;
        // 0x2529a0: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529A4u;
        goto label_2529a4;
    }
    ctx->pc = 0x25299Cu;
    {
        const bool branch_taken_0x25299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25299c) {
            ctx->pc = 0x2529A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25299Cu;
            // 0x2529a0: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2529E0u;
            goto label_2529e0;
        }
    }
    ctx->pc = 0x2529A4u;
label_2529a4:
    // 0x2529a4: 0xc0954cc  jal         func_255330
label_2529a8:
    if (ctx->pc == 0x2529A8u) {
        ctx->pc = 0x2529A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529A4u;
        // 0x2529a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529ACu;
        goto label_2529ac;
    }
    ctx->pc = 0x2529A4u;
    SET_GPR_U32(ctx, 31, 0x2529ACu);
    ctx->pc = 0x2529A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529A4u;
    // 0x2529a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255330u, 0x2529A4u, 0x2529ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529ACu;
label_2529ac:
    // 0x2529ac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2529b0:
    // 0x2529b0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2529b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2529b4:
    // 0x2529b4: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2529b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_2529b8:
    // 0x2529b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2529bc:
    if (ctx->pc == 0x2529BCu) {
        ctx->pc = 0x2529BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529B8u;
        // 0x2529bc: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529C0u;
        goto label_2529c0;
    }
    ctx->pc = 0x2529B8u;
    {
        const bool branch_taken_0x2529b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2529b8) {
            ctx->pc = 0x2529BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529B8u;
            // 0x2529bc: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2529E0u;
            goto label_2529e0;
        }
    }
    ctx->pc = 0x2529C0u;
label_2529c0:
    // 0x2529c0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2529c4:
    // 0x2529c4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2529c8:
    // 0x2529c8: 0x40f809  jalr        $v0
label_2529cc:
    if (ctx->pc == 0x2529CCu) {
        ctx->pc = 0x2529CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C8u;
        // 0x2529cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529D0u;
        goto label_2529d0;
    }
    ctx->pc = 0x2529C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2529D0u);
        ctx->pc = 0x2529CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C8u;
        // 0x2529cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529C8u, 0x2529D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2529D0u;
label_2529d0:
    // 0x2529d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2529d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2529d4:
    // 0x2529d4: 0xc073684  jal         func_1CDA10
label_2529d8:
    if (ctx->pc == 0x2529D8u) {
        ctx->pc = 0x2529D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529D4u;
        // 0x2529d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529DCu;
        goto label_2529dc;
    }
    ctx->pc = 0x2529D4u;
    SET_GPR_U32(ctx, 31, 0x2529DCu);
    ctx->pc = 0x2529D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529D4u;
    // 0x2529d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA10u, 0x2529D4u, 0x2529DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529DCu;
label_2529dc:
    // 0x2529dc: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x2529dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_2529e0:
    // 0x2529e0: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2529e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2529e4:
    // 0x2529e4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2529e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2529e8:
    // 0x2529e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2529ec:
    if (ctx->pc == 0x2529ECu) {
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529F0u;
        goto label_2529f0;
    }
    ctx->pc = 0x2529E8u;
    {
        const bool branch_taken_0x2529e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2529e8) {
            ctx->pc = 0x2529ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529E8u;
            // 0x2529ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A0Cu;
            goto label_252a0c;
        }
    }
    ctx->pc = 0x2529F0u;
label_2529f0:
    // 0x2529f0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2529f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2529f4:
    // 0x2529f4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2529f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2529f8:
    // 0x2529f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2529fc:
    if (ctx->pc == 0x2529FCu) {
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A00u;
        goto label_252a00;
    }
    ctx->pc = 0x2529F8u;
    {
        const bool branch_taken_0x2529f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529f8) {
            ctx->pc = 0x252A08u;
            goto label_252a08;
        }
    }
    ctx->pc = 0x252A00u;
label_252a00:
    // 0x252a00: 0xc08a15a  jal         func_228568
label_252a04:
    if (ctx->pc == 0x252A04u) {
        ctx->pc = 0x252A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A00u;
        // 0x252a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A08u;
        goto label_252a08;
    }
    ctx->pc = 0x252A00u;
    SET_GPR_U32(ctx, 31, 0x252A08u);
    ctx->pc = 0x252A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A00u;
    // 0x252a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x252A00u, 0x252A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A08u;
label_252a08:
    // 0x252a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252a0c:
    // 0x252a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_252a10:
    // 0x252a10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x252a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252a14:
    // 0x252a14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x252a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_252a18:
    // 0x252a18: 0x3e00008  jr          $ra
label_252a1c:
    if (ctx->pc == 0x252A1Cu) {
        ctx->pc = 0x252A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A18u;
        // 0x252a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A20u;
        goto label_fallthrough_0x252a18;
    }
    ctx->pc = 0x252A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A18u;
        // 0x252a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252a18:
    ctx->pc = 0x252A20u;
}
