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

// Function: sub_001F3240
// Address: 0x1f3240 - 0x1f3300
void sub_001F3240_0x1f3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3240_0x1f3240");
#endif

    switch (ctx->pc) {
        case 0x1f3240u: goto label_1f3240;
        case 0x1f3244u: goto label_1f3244;
        case 0x1f3248u: goto label_1f3248;
        case 0x1f324cu: goto label_1f324c;
        case 0x1f3250u: goto label_1f3250;
        case 0x1f3254u: goto label_1f3254;
        case 0x1f3258u: goto label_1f3258;
        case 0x1f325cu: goto label_1f325c;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f3264u: goto label_1f3264;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f326cu: goto label_1f326c;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f3274u: goto label_1f3274;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f327cu: goto label_1f327c;
        case 0x1f3280u: goto label_1f3280;
        case 0x1f3284u: goto label_1f3284;
        case 0x1f3288u: goto label_1f3288;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f3290u: goto label_1f3290;
        case 0x1f3294u: goto label_1f3294;
        case 0x1f3298u: goto label_1f3298;
        case 0x1f329cu: goto label_1f329c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32a4u: goto label_1f32a4;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f32acu: goto label_1f32ac;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32b8u: goto label_1f32b8;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32c0u: goto label_1f32c0;
        case 0x1f32c4u: goto label_1f32c4;
        case 0x1f32c8u: goto label_1f32c8;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f32d0u: goto label_1f32d0;
        case 0x1f32d4u: goto label_1f32d4;
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32dcu: goto label_1f32dc;
        case 0x1f32e0u: goto label_1f32e0;
        case 0x1f32e4u: goto label_1f32e4;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f0u: goto label_1f32f0;
        case 0x1f32f4u: goto label_1f32f4;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f32fcu: goto label_1f32fc;
        default: break;
    }

    ctx->pc = 0x1f3240u;

label_1f3240:
    // 0x1f3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f3244:
    // 0x1f3244: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f3244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f3248:
    // 0x1f3248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f324c:
    // 0x1f324c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3250:
    // 0x1f3250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f3254:
    // 0x1f3254: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x1f3254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_1f3258:
    // 0x1f3258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f325c:
    // 0x1f325c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1f3260:
    // 0x1f3260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f3264:
    // 0x1f3264: 0xc07c7de  jal         func_1F1F78
label_1f3268:
    if (ctx->pc == 0x1F3268u) {
        ctx->pc = 0x1F326Cu;
        goto label_1f326c;
    }
    ctx->pc = 0x1F3264u;
    SET_GPR_U32(ctx, 31, 0x1F326Cu);
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F3264u, 0x1F326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F326Cu;
label_1f326c:
    // 0x1f326c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f326cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3270:
    // 0x1f3270: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_1f3274:
    if (ctx->pc == 0x1F3274u) {
        ctx->pc = 0x1F3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3270u;
        // 0x1f3274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3278u;
        goto label_1f3278;
    }
    ctx->pc = 0x1F3270u;
    {
        const bool branch_taken_0x1f3270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3270u;
        // 0x1f3274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3270) {
            ctx->pc = 0x1F32E4u;
            goto label_1f32e4;
        }
    }
    ctx->pc = 0x1F3278u;
label_1f3278:
    // 0x1f3278: 0xc081d36  jal         func_2074D8
label_1f327c:
    if (ctx->pc == 0x1F327Cu) {
        ctx->pc = 0x1F327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3278u;
        // 0x1f327c: 0x2631ffd9  addiu       $s1, $s1, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3280u;
        goto label_1f3280;
    }
    ctx->pc = 0x1F3278u;
    SET_GPR_U32(ctx, 31, 0x1F3280u);
    ctx->pc = 0x1F327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3278u;
    // 0x1f327c: 0x2631ffd9  addiu       $s1, $s1, -0x27 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3278u, 0x1F3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3280u;
label_1f3280:
    // 0x1f3280: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f3284:
    // 0x1f3284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3288:
    // 0x1f3288: 0xc08217a  jal         func_2085E8
label_1f328c:
    if (ctx->pc == 0x1F328Cu) {
        ctx->pc = 0x1F328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3288u;
        // 0x1f328c: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3290u;
        goto label_1f3290;
    }
    ctx->pc = 0x1F3288u;
    SET_GPR_U32(ctx, 31, 0x1F3290u);
    ctx->pc = 0x1F328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3288u;
    // 0x1f328c: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F3288u, 0x1F3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3290u;
label_1f3290:
    // 0x1f3290: 0xc081d36  jal         func_2074D8
label_1f3294:
    if (ctx->pc == 0x1F3294u) {
        ctx->pc = 0x1F3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3290u;
        // 0x1f3294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3298u;
        goto label_1f3298;
    }
    ctx->pc = 0x1F3290u;
    SET_GPR_U32(ctx, 31, 0x1F3298u);
    ctx->pc = 0x1F3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3290u;
    // 0x1f3294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3290u, 0x1F3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3298u;
label_1f3298:
    // 0x1f3298: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f329c:
    // 0x1f329c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f329cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f32a0:
    // 0x1f32a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f32a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f32a4:
    // 0x1f32a4: 0xc0820dc  jal         func_208370
label_1f32a8:
    if (ctx->pc == 0x1F32A8u) {
        ctx->pc = 0x1F32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32A4u;
        // 0x1f32a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32ACu;
        goto label_1f32ac;
    }
    ctx->pc = 0x1F32A4u;
    SET_GPR_U32(ctx, 31, 0x1F32ACu);
    ctx->pc = 0x1F32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32A4u;
    // 0x1f32a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F32A4u, 0x1F32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32ACu;
label_1f32ac:
    // 0x1f32ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f32acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f32b0:
    // 0x1f32b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f32b4:
    // 0x1f32b4: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
label_1f32b8:
    if (ctx->pc == 0x1F32B8u) {
        ctx->pc = 0x1F32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32B4u;
        // 0x1f32b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32BCu;
        goto label_1f32bc;
    }
    ctx->pc = 0x1F32B4u;
    {
        const bool branch_taken_0x1f32b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f32b4) {
            ctx->pc = 0x1F32B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F32B4u;
            // 0x1f32b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32E4u;
            goto label_1f32e4;
        }
    }
    ctx->pc = 0x1F32BCu;
label_1f32bc:
    // 0x1f32bc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f32c0:
    // 0x1f32c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f32c4:
    // 0x1f32c4: 0x40f809  jalr        $v0
label_1f32c8:
    if (ctx->pc == 0x1F32C8u) {
        ctx->pc = 0x1F32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32C4u;
        // 0x1f32c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32CCu;
        goto label_1f32cc;
    }
    ctx->pc = 0x1F32C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F32CCu);
        ctx->pc = 0x1F32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32C4u;
        // 0x1f32c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32C4u, 0x1F32CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F32CCu;
label_1f32cc:
    // 0x1f32cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f32d0:
    // 0x1f32d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f32d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f32d4:
    // 0x1f32d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f32d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f32d8:
    // 0x1f32d8: 0xc081436  jal         func_2050D8
label_1f32dc:
    if (ctx->pc == 0x1F32DCu) {
        ctx->pc = 0x1F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32D8u;
        // 0x1f32dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32E0u;
        goto label_1f32e0;
    }
    ctx->pc = 0x1F32D8u;
    SET_GPR_U32(ctx, 31, 0x1F32E0u);
    ctx->pc = 0x1F32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32D8u;
    // 0x1f32dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F32D8u, 0x1F32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32E0u;
label_1f32e0:
    // 0x1f32e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f32e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f32e4:
    // 0x1f32e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f32e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f32e8:
    // 0x1f32e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f32e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f32ec:
    // 0x1f32ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f32ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f32f0:
    // 0x1f32f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f32f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f32f4:
    // 0x1f32f4: 0x3e00008  jr          $ra
label_1f32f8:
    if (ctx->pc == 0x1F32F8u) {
        ctx->pc = 0x1F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32F4u;
        // 0x1f32f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32FCu;
        goto label_1f32fc;
    }
    ctx->pc = 0x1F32F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32F4u;
        // 0x1f32f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F32FCu;
label_1f32fc:
    // 0x1f32fc: 0x0  nop
    ctx->pc = 0x1f32fcu;
    // NOP
    ctx->pc = 0x1f3300u;
}
