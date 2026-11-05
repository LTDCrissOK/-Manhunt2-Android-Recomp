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

// Function: sub_003CF208
// Address: 0x3cf208 - 0x3cf360
void sub_003CF208_0x3cf208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF208_0x3cf208");
#endif

    switch (ctx->pc) {
        case 0x3cf230u: goto label_3cf230;
        case 0x3cf23cu: goto label_3cf23c;
        case 0x3cf268u: goto label_3cf268;
        case 0x3cf298u: goto label_3cf298;
        case 0x3cf2e8u: goto label_3cf2e8;
        case 0x3cf2f8u: goto label_3cf2f8;
        case 0x3cf300u: goto label_3cf300;
        case 0x3cf314u: goto label_3cf314;
        case 0x3cf324u: goto label_3cf324;
        case 0x3cf334u: goto label_3cf334;
        case 0x3cf33cu: goto label_3cf33c;
        default: break;
    }

    ctx->pc = 0x3cf208u;

    // 0x3cf208: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cf208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3cf20c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3cf20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3cf210: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3cf210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3cf214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cf214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf218: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3cf218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3cf21c: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3cf21cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3cf220: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3cf220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3cf224: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3cf224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3cf228: 0xc0f367c  jal         func_3CD9F0
    ctx->pc = 0x3CF228u;
    SET_GPR_U32(ctx, 31, 0x3CF230u);
    ctx->pc = 0x3CF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF228u;
    // 0x3cf22c: 0x26723940  addiu       $s2, $s3, 0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 14656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD9F0u, 0x3CF228u, 0x3CF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF230u;
label_3cf230:
    // 0x3cf230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cf230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf234: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CF234u;
    SET_GPR_U32(ctx, 31, 0x3CF23Cu);
    ctx->pc = 0x3CF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF234u;
    // 0x3cf238: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CF234u, 0x3CF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF23Cu;
label_3cf23c:
    // 0x3cf23c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cf240: 0x8c43d68c  lw          $v1, -0x2974($v0)
    ctx->pc = 0x3cf240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cf244: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF244u;
    {
        const bool branch_taken_0x3cf244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf244) {
            ctx->pc = 0x3CF260u;
            goto label_3cf260;
        }
    }
    ctx->pc = 0x3CF24Cu;
    // 0x3cf24c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF24Cu;
    {
        const bool branch_taken_0x3cf24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf24c) {
            ctx->pc = 0x3CF260u;
            goto label_3cf260;
        }
    }
    ctx->pc = 0x3CF254u;
    // 0x3cf254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cf258: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF258u;
    {
        const bool branch_taken_0x3cf258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf258) {
            ctx->pc = 0x3CF25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF258u;
            // 0x3cf25c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF270u;
            goto label_3cf270;
        }
    }
    ctx->pc = 0x3CF260u;
label_3cf260:
    // 0x3cf260: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF260u;
    SET_GPR_U32(ctx, 31, 0x3CF268u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF260u, 0x3CF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF268u;
label_3cf268:
    // 0x3cf268: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3CF268u;
    {
        const bool branch_taken_0x3cf268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF268u;
        // 0x3cf26c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf268) {
            ctx->pc = 0x3CF340u;
            goto label_3cf340;
        }
    }
    ctx->pc = 0x3CF270u;
label_3cf270:
    // 0x3cf270: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cf270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3cf274: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x3cf274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x3cf278: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x3cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x3cf27c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3cf27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3cf280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cf280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cf284: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cf284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf288: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3cf288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3cf28c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3cf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3cf290: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CF290u;
    SET_GPR_U32(ctx, 31, 0x3CF298u);
    ctx->pc = 0x3CF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF290u;
    // 0x3cf294: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CF290u, 0x3CF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF298u;
label_3cf298:
    // 0x3cf298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cf298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf29c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3cf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf2a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cf2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cf2a4: 0xae713940  sw          $s1, 0x3940($s3)
    ctx->pc = 0x3cf2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14656), GPR_U32(ctx, 17));
    // 0x3cf2a8: 0x24504580  addiu       $s0, $v0, 0x4580
    ctx->pc = 0x3cf2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17792));
    // 0x3cf2ac: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3cf2acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3cf2b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf2b4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cf2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3cf2b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3cf2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3cf2bc: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3cf2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    // 0x3cf2c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3cf2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf2c4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3cf2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3cf2c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf2d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3cf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3cf2d4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3cf2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3cf2d8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3cf2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf2dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf2e0: 0xc0f3640  jal         func_3CD900
    ctx->pc = 0x3CF2E0u;
    SET_GPR_U32(ctx, 31, 0x3CF2E8u);
    ctx->pc = 0x3CF2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF2E0u;
    // 0x3cf2e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD900u, 0x3CF2E0u, 0x3CF2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF2E8u;
label_3cf2e8:
    // 0x3cf2e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF2E8u;
    {
        const bool branch_taken_0x3cf2e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF2E8u;
        // 0x3cf2ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf2e8) {
            ctx->pc = 0x3CF308u;
            goto label_3cf308;
        }
    }
    ctx->pc = 0x3CF2F0u;
    // 0x3cf2f0: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF2F0u;
    SET_GPR_U32(ctx, 31, 0x3CF2F8u);
    ctx->pc = 0x3CF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF2F0u;
    // 0x3cf2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF2F0u, 0x3CF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF2F8u;
label_3cf2f8:
    // 0x3cf2f8: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF2F8u;
    SET_GPR_U32(ctx, 31, 0x3CF300u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF2F8u, 0x3CF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF300u;
label_3cf300:
    // 0x3cf300: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CF300u;
    {
        const bool branch_taken_0x3cf300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF300u;
        // 0x3cf304: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf300) {
            ctx->pc = 0x3CF340u;
            goto label_3cf340;
        }
    }
    ctx->pc = 0x3CF308u;
label_3cf308:
    // 0x3cf308: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3cf308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3cf30c: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF30Cu;
    SET_GPR_U32(ctx, 31, 0x3CF314u);
    ctx->pc = 0x3CF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF30Cu;
    // 0x3cf310: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF30Cu, 0x3CF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF314u;
label_3cf314:
    // 0x3cf314: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF314u;
    {
        const bool branch_taken_0x3cf314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf314) {
            ctx->pc = 0x3CF32Cu;
            goto label_3cf32c;
        }
    }
    ctx->pc = 0x3CF31Cu;
    // 0x3cf31c: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF31Cu;
    SET_GPR_U32(ctx, 31, 0x3CF324u);
    ctx->pc = 0x3CF320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF31Cu;
    // 0x3cf320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF31Cu, 0x3CF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF324u;
label_3cf324:
    // 0x3cf324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF324u;
    {
        const bool branch_taken_0x3cf324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF324u;
        // 0x3cf328: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf324) {
            ctx->pc = 0x3CF340u;
            goto label_3cf340;
        }
    }
    ctx->pc = 0x3CF32Cu;
label_3cf32c:
    // 0x3cf32c: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF32Cu;
    SET_GPR_U32(ctx, 31, 0x3CF334u);
    ctx->pc = 0x3CF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF32Cu;
    // 0x3cf330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF32Cu, 0x3CF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF334u;
label_3cf334:
    // 0x3cf334: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF334u;
    SET_GPR_U32(ctx, 31, 0x3CF33Cu);
    ctx->pc = 0x3CF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF334u;
    // 0x3cf338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF334u, 0x3CF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF33Cu;
label_3cf33c:
    // 0x3cf33c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3cf33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3cf340:
    // 0x3cf340: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3cf340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf344: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3cf344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf348: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3cf348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf34c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3cf34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf350: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3cf350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf354: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF354u;
        // 0x3cf358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF35Cu;
    // 0x3cf35c: 0x0  nop
    ctx->pc = 0x3cf35cu;
    // NOP
    ctx->pc = 0x3cf360u;
}
