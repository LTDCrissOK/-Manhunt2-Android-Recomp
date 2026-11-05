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

// Function: sub_00327260
// Address: 0x327260 - 0x327490
void sub_00327260_0x327260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327260_0x327260");
#endif

    switch (ctx->pc) {
        case 0x3272a8u: goto label_3272a8;
        case 0x3272d8u: goto label_3272d8;
        case 0x3272fcu: goto label_3272fc;
        case 0x32732cu: goto label_32732c;
        case 0x32733cu: goto label_32733c;
        case 0x327360u: goto label_327360;
        case 0x327390u: goto label_327390;
        case 0x3273a0u: goto label_3273a0;
        case 0x3273c4u: goto label_3273c4;
        case 0x3273ecu: goto label_3273ec;
        case 0x327404u: goto label_327404;
        case 0x327448u: goto label_327448;
        case 0x32745cu: goto label_32745c;
        default: break;
    }

    ctx->pc = 0x327260u;

    // 0x327260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x327264: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x327264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x327268: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x327268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x32726c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32726cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327274: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x327274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x327278: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32727c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32727cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327280: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x327280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x327284: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x327284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x327288: 0x24a547b0  addiu       $a1, $a1, 0x47B0
    ctx->pc = 0x327288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
    // 0x32728c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x32728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x327290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327294: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x327294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x327298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x327298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32729c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x32729cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3272a0: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x3272A0u;
    SET_GPR_U32(ctx, 31, 0x3272A8u);
    ctx->pc = 0x3272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272A0u;
    // 0x3272a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x3272A0u, 0x3272A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272A8u;
label_3272a8:
    // 0x3272a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3272a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272ac: 0x1235006d  beq         $s1, $s5, . + 4 + (0x6D << 2)
    ctx->pc = 0x3272ACu;
    {
        const bool branch_taken_0x3272ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x3272B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272ACu;
        // 0x3272b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272ac) {
            ctx->pc = 0x327464u;
            goto label_327464;
        }
    }
    ctx->pc = 0x3272B4u;
    // 0x3272b4: 0x2718021  addu        $s0, $s3, $s1
    ctx->pc = 0x3272b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3272b8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3272b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3272bc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3272c0: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x3272c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3272c4: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3272c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3272c8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3272c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3272cc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x3272ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3272d0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3272D0u;
    SET_GPR_U32(ctx, 31, 0x3272D8u);
    ctx->pc = 0x3272D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272D0u;
    // 0x3272d4: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3272D0u, 0x3272D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272D8u;
label_3272d8:
    // 0x3272d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3272dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3272dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3272e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3272e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3272e4: 0x24a547c8  addiu       $a1, $a1, 0x47C8
    ctx->pc = 0x3272e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18376));
    // 0x3272e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3272e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3272ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3272f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3272f4: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x3272F4u;
    SET_GPR_U32(ctx, 31, 0x3272FCu);
    ctx->pc = 0x3272F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272F4u;
    // 0x3272f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x3272F4u, 0x3272FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272FCu;
label_3272fc:
    // 0x3272fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3272fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327300: 0x12350012  beq         $s1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x327300u;
    {
        const bool branch_taken_0x327300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x327304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327300u;
        // 0x327304: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327300) {
            ctx->pc = 0x32734Cu;
            goto label_32734c;
        }
    }
    ctx->pc = 0x327308u;
    // 0x327308: 0x2718021  addu        $s0, $s3, $s1
    ctx->pc = 0x327308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x32730c: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x327310: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x327314: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x327314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x327318: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x327318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x32731c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x32731cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327320: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x327320u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x327324: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x327324u;
    SET_GPR_U32(ctx, 31, 0x32732Cu);
    ctx->pc = 0x327328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327324u;
    // 0x327328: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x327324u, 0x32732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32732Cu;
label_32732c:
    // 0x32732c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x32732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x327330: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x327330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x327334: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x327334u;
    SET_GPR_U32(ctx, 31, 0x32733Cu);
    ctx->pc = 0x327338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327334u;
    // 0x327338: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x327334u, 0x32733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32733Cu;
label_32733c:
    // 0x32733c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327340: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x327340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x327348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_32734c:
    // 0x32734c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x32734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x327350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327354: 0x24a547c0  addiu       $a1, $a1, 0x47C0
    ctx->pc = 0x327354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18368));
    // 0x327358: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x327358u;
    SET_GPR_U32(ctx, 31, 0x327360u);
    ctx->pc = 0x32735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327358u;
    // 0x32735c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x327358u, 0x327360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327360u;
label_327360:
    // 0x327360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327364: 0x1235003f  beq         $s1, $s5, . + 4 + (0x3F << 2)
    ctx->pc = 0x327364u;
    {
        const bool branch_taken_0x327364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x327368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327364u;
        // 0x327368: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327364) {
            ctx->pc = 0x327464u;
            goto label_327464;
        }
    }
    ctx->pc = 0x32736Cu;
    // 0x32736c: 0x2718021  addu        $s0, $s3, $s1
    ctx->pc = 0x32736cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x327370: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x327370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x327374: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x327374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x327378: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x327378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x32737c: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x32737cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x327380: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x327380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327384: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x327384u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x327388: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x327388u;
    SET_GPR_U32(ctx, 31, 0x327390u);
    ctx->pc = 0x32738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327388u;
    // 0x32738c: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x327388u, 0x327390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327390u;
label_327390:
    // 0x327390: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x327390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x327394: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x327394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x327398: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x327398u;
    SET_GPR_U32(ctx, 31, 0x3273A0u);
    ctx->pc = 0x32739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327398u;
    // 0x32739c: 0x96460004  lhu         $a2, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x327398u, 0x3273A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273A0u;
label_3273a0:
    // 0x3273a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3273a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3273a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3273a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3273a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3273ac: 0x24a547b8  addiu       $a1, $a1, 0x47B8
    ctx->pc = 0x3273acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18360));
    // 0x3273b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3273b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3273b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3273b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3273bc: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x3273BCu;
    SET_GPR_U32(ctx, 31, 0x3273C4u);
    ctx->pc = 0x3273C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273BCu;
    // 0x3273c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x3273BCu, 0x3273C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273C4u;
label_3273c4:
    // 0x3273c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3273c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273c8: 0x12350026  beq         $s1, $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x3273C8u;
    {
        const bool branch_taken_0x3273c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x3273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273C8u;
        // 0x3273cc: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273c8) {
            ctx->pc = 0x327464u;
            goto label_327464;
        }
    }
    ctx->pc = 0x3273D0u;
    // 0x3273d0: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x3273d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3273d4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3273d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3273d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3273d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3273dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3273e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273e4: 0xc0c9d24  jal         func_327490
    ctx->pc = 0x3273E4u;
    SET_GPR_U32(ctx, 31, 0x3273ECu);
    ctx->pc = 0x3273E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273E4u;
    // 0x3273e8: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327490u, 0x3273E4u, 0x3273ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273ECu;
label_3273ec:
    // 0x3273ec: 0x1055001d  beq         $v0, $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x3273ECu;
    {
        const bool branch_taken_0x3273ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x3273F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273ECu;
        // 0x3273f0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273ec) {
            ctx->pc = 0x327464u;
            goto label_327464;
        }
    }
    ctx->pc = 0x3273F4u;
    // 0x3273f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3273f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273f8: 0x24a547d0  addiu       $a1, $a1, 0x47D0
    ctx->pc = 0x3273f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18384));
    // 0x3273fc: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x3273FCu;
    SET_GPR_U32(ctx, 31, 0x327404u);
    ctx->pc = 0x327400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273FCu;
    // 0x327400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x3273FCu, 0x327404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327404u;
label_327404:
    // 0x327404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327408: 0x12350016  beq         $s1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x327408u;
    {
        const bool branch_taken_0x327408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x32740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327408u;
        // 0x32740c: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327408) {
            ctx->pc = 0x327464u;
            goto label_327464;
        }
    }
    ctx->pc = 0x327410u;
    // 0x327410: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x327410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x327414: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x327414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327418: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x327418u;
    {
        const bool branch_taken_0x327418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327418) {
            ctx->pc = 0x32741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327418u;
            // 0x32741c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327420u;
            goto label_327420;
        }
    }
    ctx->pc = 0x327420u;
label_327420:
    // 0x327420: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x327420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x327424: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x327424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x327428: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x327428u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x32742c: 0x1012  mflo        $v0
    ctx->pc = 0x32742cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x327430: 0xa6420058  sh          $v0, 0x58($s2)
    ctx->pc = 0x327430u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x327434: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327438: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x327438u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x32743c: 0x2012  mflo        $a0
    ctx->pc = 0x32743cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x327440: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x327440u;
    SET_GPR_U32(ctx, 31, 0x327448u);
    ctx->pc = 0x327444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327440u;
    // 0x327444: 0x832018  mult        $a0, $a0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x327440u, 0x327448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327448u;
label_327448:
    // 0x327448: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x327448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x32744c: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x32744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x327450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x327450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327454: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x327454u;
    SET_GPR_U32(ctx, 31, 0x32745Cu);
    ctx->pc = 0x327458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327454u;
    // 0x327458: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x327454u, 0x32745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32745Cu;
label_32745c:
    // 0x32745c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32745Cu;
    {
        const bool branch_taken_0x32745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32745Cu;
        // 0x327460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32745c) {
            ctx->pc = 0x327468u;
            goto label_327468;
        }
    }
    ctx->pc = 0x327464u;
label_327464:
    // 0x327464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327468:
    // 0x327468: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x327468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32746c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32746cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327470: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327474: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x327474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327478: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x327478u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32747c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32747cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327480: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x327480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327484: 0x3e00008  jr          $ra
    ctx->pc = 0x327484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327484u;
        // 0x327488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32748Cu;
    // 0x32748c: 0x0  nop
    ctx->pc = 0x32748cu;
    // NOP
    ctx->pc = 0x327490u;
}
