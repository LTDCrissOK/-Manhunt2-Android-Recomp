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

// Function: sub_00358098
// Address: 0x358098 - 0x358198
void sub_00358098_0x358098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358098_0x358098");
#endif

    switch (ctx->pc) {
        case 0x358098u: goto label_358098;
        case 0x35809cu: goto label_35809c;
        case 0x3580a0u: goto label_3580a0;
        case 0x3580a4u: goto label_3580a4;
        case 0x3580a8u: goto label_3580a8;
        case 0x3580acu: goto label_3580ac;
        case 0x3580b0u: goto label_3580b0;
        case 0x3580b4u: goto label_3580b4;
        case 0x3580b8u: goto label_3580b8;
        case 0x3580bcu: goto label_3580bc;
        case 0x3580c0u: goto label_3580c0;
        case 0x3580c4u: goto label_3580c4;
        case 0x3580c8u: goto label_3580c8;
        case 0x3580ccu: goto label_3580cc;
        case 0x3580d0u: goto label_3580d0;
        case 0x3580d4u: goto label_3580d4;
        case 0x3580d8u: goto label_3580d8;
        case 0x3580dcu: goto label_3580dc;
        case 0x3580e0u: goto label_3580e0;
        case 0x3580e4u: goto label_3580e4;
        case 0x3580e8u: goto label_3580e8;
        case 0x3580ecu: goto label_3580ec;
        case 0x3580f0u: goto label_3580f0;
        case 0x3580f4u: goto label_3580f4;
        case 0x3580f8u: goto label_3580f8;
        case 0x3580fcu: goto label_3580fc;
        case 0x358100u: goto label_358100;
        case 0x358104u: goto label_358104;
        case 0x358108u: goto label_358108;
        case 0x35810cu: goto label_35810c;
        case 0x358110u: goto label_358110;
        case 0x358114u: goto label_358114;
        case 0x358118u: goto label_358118;
        case 0x35811cu: goto label_35811c;
        case 0x358120u: goto label_358120;
        case 0x358124u: goto label_358124;
        case 0x358128u: goto label_358128;
        case 0x35812cu: goto label_35812c;
        case 0x358130u: goto label_358130;
        case 0x358134u: goto label_358134;
        case 0x358138u: goto label_358138;
        case 0x35813cu: goto label_35813c;
        case 0x358140u: goto label_358140;
        case 0x358144u: goto label_358144;
        case 0x358148u: goto label_358148;
        case 0x35814cu: goto label_35814c;
        case 0x358150u: goto label_358150;
        case 0x358154u: goto label_358154;
        case 0x358158u: goto label_358158;
        case 0x35815cu: goto label_35815c;
        case 0x358160u: goto label_358160;
        case 0x358164u: goto label_358164;
        case 0x358168u: goto label_358168;
        case 0x35816cu: goto label_35816c;
        case 0x358170u: goto label_358170;
        case 0x358174u: goto label_358174;
        case 0x358178u: goto label_358178;
        case 0x35817cu: goto label_35817c;
        case 0x358180u: goto label_358180;
        case 0x358184u: goto label_358184;
        case 0x358188u: goto label_358188;
        case 0x35818cu: goto label_35818c;
        case 0x358190u: goto label_358190;
        case 0x358194u: goto label_358194;
        default: break;
    }

    ctx->pc = 0x358098u;

label_358098:
    // 0x358098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x358098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_35809c:
    // 0x35809c: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x35809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_3580a0:
    // 0x3580a0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3580a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_3580a4:
    // 0x3580a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3580a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3580a8:
    // 0x3580a8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3580a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3580ac:
    // 0x3580ac: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3580acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3580b0:
    // 0x3580b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3580b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3580b4:
    // 0x3580b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3580b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3580b8:
    // 0x3580b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3580b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3580bc:
    // 0x3580bc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3580bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3580c0:
    // 0x3580c0: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3580c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3580c4:
    // 0x3580c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3580c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3580c8:
    // 0x3580c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3580c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3580cc:
    // 0x3580cc: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3580ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3580d0:
    // 0x3580d0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3580d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_3580d4:
    // 0x3580d4: 0xc0e3fd4  jal         func_38FF50
label_3580d8:
    if (ctx->pc == 0x3580D8u) {
        ctx->pc = 0x3580D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580D4u;
        // 0x3580d8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580DCu;
        goto label_3580dc;
    }
    ctx->pc = 0x3580D4u;
    SET_GPR_U32(ctx, 31, 0x3580DCu);
    ctx->pc = 0x3580D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580D4u;
    // 0x3580d8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x3580D4u, 0x3580DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580DCu;
label_3580dc:
    // 0x3580dc: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
label_3580e0:
    if (ctx->pc == 0x3580E0u) {
        ctx->pc = 0x3580E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580DCu;
        // 0x3580e0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580E4u;
        goto label_3580e4;
    }
    ctx->pc = 0x3580DCu;
    {
        const bool branch_taken_0x3580dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3580dc) {
            ctx->pc = 0x3580E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3580DCu;
            // 0x3580e0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358180u;
            goto label_358180;
        }
    }
    ctx->pc = 0x3580E4u;
label_3580e4:
    // 0x3580e4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x3580e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_3580e8:
    // 0x3580e8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x3580e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_3580ec:
    // 0x3580ec: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3580f0:
    // 0x3580f0: 0x60f809  jalr        $v1
label_3580f4:
    if (ctx->pc == 0x3580F4u) {
        ctx->pc = 0x3580F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580F0u;
        // 0x3580f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580F8u;
        goto label_3580f8;
    }
    ctx->pc = 0x3580F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3580F8u);
        ctx->pc = 0x3580F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580F0u;
        // 0x3580f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3580F0u, 0x3580F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3580F8u;
label_3580f8:
    // 0x3580f8: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3580f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3580fc:
    // 0x3580fc: 0xc083938  jal         func_20E4E0
label_358100:
    if (ctx->pc == 0x358100u) {
        ctx->pc = 0x358100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580FCu;
        // 0x358100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358104u;
        goto label_358104;
    }
    ctx->pc = 0x3580FCu;
    SET_GPR_U32(ctx, 31, 0x358104u);
    ctx->pc = 0x358100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580FCu;
    // 0x358100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x3580FCu, 0x358104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358104u;
label_358104:
    // 0x358104: 0xc0b1488  jal         func_2C5220
label_358108:
    if (ctx->pc == 0x358108u) {
        ctx->pc = 0x358108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358104u;
        // 0x358108: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35810Cu;
        goto label_35810c;
    }
    ctx->pc = 0x358104u;
    SET_GPR_U32(ctx, 31, 0x35810Cu);
    ctx->pc = 0x358108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358104u;
    // 0x358108: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x358104u, 0x35810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35810Cu;
label_35810c:
    // 0x35810c: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x35810cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
label_358110:
    // 0x358110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x358110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_358114:
    // 0x358114: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x358114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_358118:
    // 0x358118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x358118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35811c:
    // 0x35811c: 0xc0b1574  jal         func_2C55D0
label_358120:
    if (ctx->pc == 0x358120u) {
        ctx->pc = 0x358120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35811Cu;
        // 0x358120: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358124u;
        goto label_358124;
    }
    ctx->pc = 0x35811Cu;
    SET_GPR_U32(ctx, 31, 0x358124u);
    ctx->pc = 0x358120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35811Cu;
    // 0x358120: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x35811Cu, 0x358124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358124u;
label_358124:
    // 0x358124: 0xc0f5240  jal         func_3D4900
label_358128:
    if (ctx->pc == 0x358128u) {
        ctx->pc = 0x358128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358124u;
        // 0x358128: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35812Cu;
        goto label_35812c;
    }
    ctx->pc = 0x358124u;
    SET_GPR_U32(ctx, 31, 0x35812Cu);
    ctx->pc = 0x358128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358124u;
    // 0x358128: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x358124u, 0x35812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35812Cu;
label_35812c:
    // 0x35812c: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x35812cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_358130:
    // 0x358130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358134:
    // 0x358134: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x358134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_358138:
    // 0x358138: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x358138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_35813c:
    // 0x35813c: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x35813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_358140:
    // 0x358140: 0x24e76b28  addiu       $a3, $a3, 0x6B28
    ctx->pc = 0x358140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27432));
label_358144:
    // 0x358144: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x358144u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_358148:
    // 0x358148: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x358148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35814c:
    // 0x35814c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x35814cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358150:
    // 0x358150: 0xc0d6416  jal         func_359058
label_358154:
    if (ctx->pc == 0x358154u) {
        ctx->pc = 0x358154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358150u;
        // 0x358154: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358158u;
        goto label_358158;
    }
    ctx->pc = 0x358150u;
    SET_GPR_U32(ctx, 31, 0x358158u);
    ctx->pc = 0x358154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358150u;
    // 0x358154: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359058u, 0x358150u, 0x358158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358158u;
label_358158:
    // 0x358158: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x358158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_35815c:
    // 0x35815c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358160:
    // 0x358160: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x358160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_358164:
    // 0x358164: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x358164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_358168:
    // 0x358168: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x358168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_35816c:
    // 0x35816c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358170:
    // 0x358170: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x358170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_358174:
    // 0x358174: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x358174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_358178:
    // 0x358178: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x358178u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_35817c:
    // 0x35817c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x35817cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_358180:
    // 0x358180: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x358180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_358184:
    // 0x358184: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x358184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_358188:
    // 0x358188: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x358188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35818c:
    // 0x35818c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x35818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_358190:
    // 0x358190: 0x3e00008  jr          $ra
label_358194:
    if (ctx->pc == 0x358194u) {
        ctx->pc = 0x358194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358190u;
        // 0x358194: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358198u;
        goto label_fallthrough_0x358190;
    }
    ctx->pc = 0x358190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358190u;
        // 0x358194: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x358190:
    ctx->pc = 0x358198u;
}
