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

// Function: sub_00140320
// Address: 0x140320 - 0x140518
void sub_00140320_0x140320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140320_0x140320");
#endif

    switch (ctx->pc) {
        case 0x14033cu: goto label_14033c;
        case 0x14034cu: goto label_14034c;
        case 0x140460u: goto label_140460;
        case 0x140468u: goto label_140468;
        case 0x140500u: goto label_140500;
        default: break;
    }

    ctx->pc = 0x140320u;

    // 0x140320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x140324: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x140324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x140328: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x140328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x14032c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x140330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140334: 0xc04fe64  jal         func_13F990
    ctx->pc = 0x140334u;
    SET_GPR_U32(ctx, 31, 0x14033Cu);
    ctx->pc = 0x140338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140334u;
    // 0x140338: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F990u, 0x140334u, 0x14033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14033Cu;
label_14033c:
    // 0x14033c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14033cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x140340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140344: 0xc05007c  jal         func_1401F0
    ctx->pc = 0x140344u;
    SET_GPR_U32(ctx, 31, 0x14034Cu);
    ctx->pc = 0x140348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140344u;
    // 0x140348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1401F0u, 0x140344u, 0x14034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14034Cu;
label_14034c:
    // 0x14034c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14034Cu;
    {
        const bool branch_taken_0x14034c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x140350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14034Cu;
        // 0x140350: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14034c) {
            ctx->pc = 0x140364u;
            goto label_140364;
        }
    }
    ctx->pc = 0x140354u;
    // 0x140354: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140354u;
    {
        const bool branch_taken_0x140354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140354) {
            ctx->pc = 0x140358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140354u;
            // 0x140358: 0x9223046c  lbu         $v1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14036Cu;
            goto label_14036c;
        }
    }
    ctx->pc = 0x14035Cu;
    // 0x14035c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x14035Cu;
    {
        const bool branch_taken_0x14035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14035Cu;
        // 0x140360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14035c) {
            ctx->pc = 0x140504u;
            goto label_140504;
        }
    }
    ctx->pc = 0x140364u;
label_140364:
    // 0x140364: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x140364u;
    {
        const bool branch_taken_0x140364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140364u;
        // 0x140368: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140364) {
            ctx->pc = 0x140504u;
            goto label_140504;
        }
    }
    ctx->pc = 0x14036Cu;
label_14036c:
    // 0x14036c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x14036cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x140370: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x140374: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x140374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14037c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x14037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x140380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x140384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14038c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x140390: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x140394: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x140394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14039c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1403a0: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x1403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x1403a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1403A4u;
    {
        const bool branch_taken_0x1403a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1403a4) {
            ctx->pc = 0x1403A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1403A4u;
            // 0x1403a8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1403B4u;
            goto label_1403b4;
        }
    }
    ctx->pc = 0x1403ACu;
    // 0x1403ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1403ACu;
    {
        const bool branch_taken_0x1403ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403ACu;
        // 0x1403b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403ac) {
            ctx->pc = 0x1403BCu;
            goto label_1403bc;
        }
    }
    ctx->pc = 0x1403B4u;
label_1403b4:
    // 0x1403b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1403b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1403b8: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1403b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1403bc:
    // 0x1403bc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1403bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403c0: 0x24e39a08  addiu       $v1, $a3, -0x65F8
    ctx->pc = 0x1403c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941192));
    // 0x1403c4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1403c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1403c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1403c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1403cc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1403ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1403d0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1403d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403d4: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x1403d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1403d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1403d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1403dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1403dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1403e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1403e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1403e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1403e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1403e8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1403e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403ec: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1403f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1403f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1403f4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x1403f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1403f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1403f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1403fc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1403fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x140400: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140408: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14040c: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x140410: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140410u;
    {
        const bool branch_taken_0x140410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140410) {
            ctx->pc = 0x140414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140410u;
            // 0x140414: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140420u;
            goto label_140420;
        }
    }
    ctx->pc = 0x140418u;
    // 0x140418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140418u;
    {
        const bool branch_taken_0x140418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140418u;
        // 0x14041c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140418) {
            ctx->pc = 0x140428u;
            goto label_140428;
        }
    }
    ctx->pc = 0x140420u;
label_140420:
    // 0x140420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140424: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_140428:
    // 0x140428: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x140428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14042c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140430: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x140430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x140434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x140434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140438: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x140438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14043c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140440: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x140440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x140444: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x140444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x140448: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x140448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14044c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x140450: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x140450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140454: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x140454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x140458: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x140458u;
    SET_GPR_U32(ctx, 31, 0x140460u);
    ctx->pc = 0x14045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140458u;
    // 0x14045c: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x140458u, 0x140460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140460u;
label_140460:
    // 0x140460: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x140460u;
    SET_GPR_U32(ctx, 31, 0x140468u);
    ctx->pc = 0x140464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140460u;
    // 0x140464: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x140460u, 0x140468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140468u;
label_140468:
    // 0x140468: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x140468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14046c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14046cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140470: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x140470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140474: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140478: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x140478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x14047c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140480: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x140480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x140484: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x140484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140488: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x140488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14048c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x14048cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x140490: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x140490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x140494: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x140494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140498: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x140498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14049c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x14049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1404a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1404a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1404a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1404a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1404a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1404a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1404ac: 0x0  nop
    ctx->pc = 0x1404acu;
    // NOP
    // 0x1404b0: 0x0  nop
    ctx->pc = 0x1404b0u;
    // NOP
    // 0x1404b4: 0x46010084  c1          0x10084
    ctx->pc = 0x1404b4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1404b8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1404b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1404bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1404bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1404c0: 0x0  nop
    ctx->pc = 0x1404c0u;
    // NOP
    // 0x1404c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1404c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1404c8: 0x0  nop
    ctx->pc = 0x1404c8u;
    // NOP
    // 0x1404cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1404CCu;
    {
        const bool branch_taken_0x1404cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404CCu;
        // 0x1404d0: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404cc) {
            ctx->pc = 0x1404F8u;
            goto label_1404f8;
        }
    }
    ctx->pc = 0x1404D4u;
    // 0x1404d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1404d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1404d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1404dc: 0x0  nop
    ctx->pc = 0x1404dcu;
    // NOP
    // 0x1404e0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1404e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1404e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1404e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1404e8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1404e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1404ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1404ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1404f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1404f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1404f4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1404f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_1404f8:
    // 0x1404f8: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1404F8u;
    SET_GPR_U32(ctx, 31, 0x140500u);
    ctx->pc = 0x1404FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404F8u;
    // 0x1404fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1404F8u, 0x140500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140500u;
label_140500:
    // 0x140500: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x140500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_140504:
    // 0x140504: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x140504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140508: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x140508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x14050c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14050cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140510: 0x3e00008  jr          $ra
    ctx->pc = 0x140510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140510u;
        // 0x140514: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140518u;
}
