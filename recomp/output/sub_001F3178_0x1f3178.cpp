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

// Function: sub_001F3178
// Address: 0x1f3178 - 0x1f3240
void sub_001F3178_0x1f3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3178_0x1f3178");
#endif

    switch (ctx->pc) {
        case 0x1f3178u: goto label_1f3178;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3180u: goto label_1f3180;
        case 0x1f3184u: goto label_1f3184;
        case 0x1f3188u: goto label_1f3188;
        case 0x1f318cu: goto label_1f318c;
        case 0x1f3190u: goto label_1f3190;
        case 0x1f3194u: goto label_1f3194;
        case 0x1f3198u: goto label_1f3198;
        case 0x1f319cu: goto label_1f319c;
        case 0x1f31a0u: goto label_1f31a0;
        case 0x1f31a4u: goto label_1f31a4;
        case 0x1f31a8u: goto label_1f31a8;
        case 0x1f31acu: goto label_1f31ac;
        case 0x1f31b0u: goto label_1f31b0;
        case 0x1f31b4u: goto label_1f31b4;
        case 0x1f31b8u: goto label_1f31b8;
        case 0x1f31bcu: goto label_1f31bc;
        case 0x1f31c0u: goto label_1f31c0;
        case 0x1f31c4u: goto label_1f31c4;
        case 0x1f31c8u: goto label_1f31c8;
        case 0x1f31ccu: goto label_1f31cc;
        case 0x1f31d0u: goto label_1f31d0;
        case 0x1f31d4u: goto label_1f31d4;
        case 0x1f31d8u: goto label_1f31d8;
        case 0x1f31dcu: goto label_1f31dc;
        case 0x1f31e0u: goto label_1f31e0;
        case 0x1f31e4u: goto label_1f31e4;
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31ecu: goto label_1f31ec;
        case 0x1f31f0u: goto label_1f31f0;
        case 0x1f31f4u: goto label_1f31f4;
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f31fcu: goto label_1f31fc;
        case 0x1f3200u: goto label_1f3200;
        case 0x1f3204u: goto label_1f3204;
        case 0x1f3208u: goto label_1f3208;
        case 0x1f320cu: goto label_1f320c;
        case 0x1f3210u: goto label_1f3210;
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3218u: goto label_1f3218;
        case 0x1f321cu: goto label_1f321c;
        case 0x1f3220u: goto label_1f3220;
        case 0x1f3224u: goto label_1f3224;
        case 0x1f3228u: goto label_1f3228;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f3230u: goto label_1f3230;
        case 0x1f3234u: goto label_1f3234;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f323cu: goto label_1f323c;
        default: break;
    }

    ctx->pc = 0x1f3178u;

label_1f3178:
    // 0x1f3178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f317c:
    // 0x1f317c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f3180:
    // 0x1f3180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f3184:
    // 0x1f3184: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1f3184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f3188:
    // 0x1f3188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f318c:
    // 0x1f318c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f3190:
    // 0x1f3190: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f3190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f3194:
    // 0x1f3194: 0x8ca313c4  lw          $v1, 0x13C4($a1)
    ctx->pc = 0x1f3194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5060)));
label_1f3198:
    // 0x1f3198: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1f319c:
    if (ctx->pc == 0x1F319Cu) {
        ctx->pc = 0x1F319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3198u;
        // 0x1f319c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31A0u;
        goto label_1f31a0;
    }
    ctx->pc = 0x1F3198u;
    {
        const bool branch_taken_0x1f3198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3198u;
        // 0x1f319c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3198) {
            ctx->pc = 0x1F322Cu;
            goto label_1f322c;
        }
    }
    ctx->pc = 0x1F31A0u;
label_1f31a0:
    // 0x1f31a0: 0x240200f9  addiu       $v0, $zero, 0xF9
    ctx->pc = 0x1f31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_1f31a4:
    // 0x1f31a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1f31a8:
    // 0x1f31a8: 0xaca213c4  sw          $v0, 0x13C4($a1)
    ctx->pc = 0x1f31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5060), GPR_U32(ctx, 2));
label_1f31ac:
    // 0x1f31ac: 0xc07c7de  jal         func_1F1F78
label_1f31b0:
    if (ctx->pc == 0x1F31B0u) {
        ctx->pc = 0x1F31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31ACu;
        // 0x1f31b0: 0x8c65bd50  lw          $a1, -0x42B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31B4u;
        goto label_1f31b4;
    }
    ctx->pc = 0x1F31ACu;
    SET_GPR_U32(ctx, 31, 0x1F31B4u);
    ctx->pc = 0x1F31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31ACu;
    // 0x1f31b0: 0x8c65bd50  lw          $a1, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F31ACu, 0x1F31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31B4u;
label_1f31b4:
    // 0x1f31b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f31b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f31b8:
    // 0x1f31b8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_1f31bc:
    if (ctx->pc == 0x1F31BCu) {
        ctx->pc = 0x1F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B8u;
        // 0x1f31bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31C0u;
        goto label_1f31c0;
    }
    ctx->pc = 0x1F31B8u;
    {
        const bool branch_taken_0x1f31b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B8u;
        // 0x1f31bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31b8) {
            ctx->pc = 0x1F322Cu;
            goto label_1f322c;
        }
    }
    ctx->pc = 0x1F31C0u;
label_1f31c0:
    // 0x1f31c0: 0xc081d36  jal         func_2074D8
label_1f31c4:
    if (ctx->pc == 0x1F31C4u) {
        ctx->pc = 0x1F31C8u;
        goto label_1f31c8;
    }
    ctx->pc = 0x1F31C0u;
    SET_GPR_U32(ctx, 31, 0x1F31C8u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F31C0u, 0x1F31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31C8u;
label_1f31c8:
    // 0x1f31c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f31cc:
    // 0x1f31cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f31ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f31d0:
    // 0x1f31d0: 0xc08217a  jal         func_2085E8
label_1f31d4:
    if (ctx->pc == 0x1F31D4u) {
        ctx->pc = 0x1F31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31D0u;
        // 0x1f31d4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31D8u;
        goto label_1f31d8;
    }
    ctx->pc = 0x1F31D0u;
    SET_GPR_U32(ctx, 31, 0x1F31D8u);
    ctx->pc = 0x1F31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31D0u;
    // 0x1f31d4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F31D0u, 0x1F31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31D8u;
label_1f31d8:
    // 0x1f31d8: 0xc081d36  jal         func_2074D8
label_1f31dc:
    if (ctx->pc == 0x1F31DCu) {
        ctx->pc = 0x1F31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31D8u;
        // 0x1f31dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31E0u;
        goto label_1f31e0;
    }
    ctx->pc = 0x1F31D8u;
    SET_GPR_U32(ctx, 31, 0x1F31E0u);
    ctx->pc = 0x1F31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31D8u;
    // 0x1f31dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F31D8u, 0x1F31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31E0u;
label_1f31e0:
    // 0x1f31e0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f31e4:
    // 0x1f31e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f31e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f31e8:
    // 0x1f31e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f31e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f31ec:
    // 0x1f31ec: 0xc0820dc  jal         func_208370
label_1f31f0:
    if (ctx->pc == 0x1F31F0u) {
        ctx->pc = 0x1F31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31ECu;
        // 0x1f31f0: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31F4u;
        goto label_1f31f4;
    }
    ctx->pc = 0x1F31ECu;
    SET_GPR_U32(ctx, 31, 0x1F31F4u);
    ctx->pc = 0x1F31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31ECu;
    // 0x1f31f0: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F31ECu, 0x1F31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31F4u;
label_1f31f4:
    // 0x1f31f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f31f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f31f8:
    // 0x1f31f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f31fc:
    // 0x1f31fc: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
label_1f3200:
    if (ctx->pc == 0x1F3200u) {
        ctx->pc = 0x1F3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31FCu;
        // 0x1f3200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3204u;
        goto label_1f3204;
    }
    ctx->pc = 0x1F31FCu;
    {
        const bool branch_taken_0x1f31fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f31fc) {
            ctx->pc = 0x1F3200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F31FCu;
            // 0x1f3200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F322Cu;
            goto label_1f322c;
        }
    }
    ctx->pc = 0x1F3204u;
label_1f3204:
    // 0x1f3204: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f3208:
    // 0x1f3208: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f320c:
    // 0x1f320c: 0x40f809  jalr        $v0
label_1f3210:
    if (ctx->pc == 0x1F3210u) {
        ctx->pc = 0x1F3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F320Cu;
        // 0x1f3210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3214u;
        goto label_1f3214;
    }
    ctx->pc = 0x1F320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3214u);
        ctx->pc = 0x1F3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F320Cu;
        // 0x1f3210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F320Cu, 0x1F3214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3214u;
label_1f3214:
    // 0x1f3214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3218:
    // 0x1f3218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f321c:
    // 0x1f321c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f321cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3220:
    // 0x1f3220: 0xc081436  jal         func_2050D8
label_1f3224:
    if (ctx->pc == 0x1F3224u) {
        ctx->pc = 0x1F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3220u;
        // 0x1f3224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3228u;
        goto label_1f3228;
    }
    ctx->pc = 0x1F3220u;
    SET_GPR_U32(ctx, 31, 0x1F3228u);
    ctx->pc = 0x1F3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3220u;
    // 0x1f3224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F3220u, 0x1F3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3228u;
label_1f3228:
    // 0x1f3228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f322c:
    // 0x1f322c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f322cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f3230:
    // 0x1f3230: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3234:
    // 0x1f3234: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f3234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f3238:
    // 0x1f3238: 0x3e00008  jr          $ra
label_1f323c:
    if (ctx->pc == 0x1F323Cu) {
        ctx->pc = 0x1F323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3238u;
        // 0x1f323c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3240u;
        goto label_fallthrough_0x1f3238;
    }
    ctx->pc = 0x1F3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3238u;
        // 0x1f323c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f3238:
    ctx->pc = 0x1F3240u;
}
