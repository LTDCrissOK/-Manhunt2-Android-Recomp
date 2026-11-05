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

// Function: sub_00285210
// Address: 0x285210 - 0x2857a0
void sub_00285210_0x285210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285210_0x285210");
#endif

    switch (ctx->pc) {
        case 0x285288u: goto label_285288;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852c0u: goto label_2852c0;
        case 0x285314u: goto label_285314;
        case 0x285338u: goto label_285338;
        case 0x285348u: goto label_285348;
        case 0x285374u: goto label_285374;
        case 0x285388u: goto label_285388;
        case 0x285398u: goto label_285398;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ecu: goto label_2853ec;
        case 0x285408u: goto label_285408;
        case 0x285460u: goto label_285460;
        case 0x285478u: goto label_285478;
        case 0x2854e8u: goto label_2854e8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855d8u: goto label_2855d8;
        case 0x285608u: goto label_285608;
        case 0x285624u: goto label_285624;
        case 0x285658u: goto label_285658;
        case 0x285674u: goto label_285674;
        case 0x2856d8u: goto label_2856d8;
        case 0x285708u: goto label_285708;
        case 0x285740u: goto label_285740;
        case 0x285748u: goto label_285748;
        case 0x28576cu: goto label_28576c;
        default: break;
    }

    ctx->pc = 0x285210u;

    // 0x285210: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x285210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x285214: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x285214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x285218: 0x8c4390d8  lw          $v1, -0x6F28($v0)
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x28521c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x28521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x285220: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x285224: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x285224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x285228: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x285228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x28522c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x28522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x285230: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x285230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285234: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x285234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x285238: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x285238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28523c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x28523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x285240: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x285240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x285244: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x285244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x285248: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x285248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x28524c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x28524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x285250: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x285250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x285254: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x285258: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x285258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28525c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28525cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x285260: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x285264: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x285264u;
    {
        const bool branch_taken_0x285264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285264u;
        // 0x285268: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285264) {
            ctx->pc = 0x285420u;
            goto label_285420;
        }
    }
    ctx->pc = 0x28526Cu;
    // 0x28526c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x28526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285270: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x285270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x285274: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x285274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x285278: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x285278u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28527c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x285280: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x285280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285284: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x285284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_285288:
    // 0x285288: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x285288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28528c: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x28528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x285290: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x285290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285294: 0x400013  mtlo        $v0
    ctx->pc = 0x285294u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x285298: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x285298u;
    SET_GPR_U32(ctx, 31, 0x2852A0u);
    ctx->pc = 0x28529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285298u;
    // 0x28529c: 0x72852800  madd        $a1, $s4, $a1 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x285298u, 0x2852A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852A0u;
label_2852a0:
    // 0x2852a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2852a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2852a4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2852a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2852A8u;
    {
        const bool branch_taken_0x2852a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2852ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852A8u;
        // 0x2852ac: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852a8) {
            ctx->pc = 0x2852D0u;
            goto label_2852d0;
        }
    }
    ctx->pc = 0x2852B0u;
    // 0x2852b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2852B0u;
    {
        const bool branch_taken_0x2852b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B0u;
        // 0x2852b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852b0) {
            ctx->pc = 0x2852C0u;
            goto label_2852c0;
        }
    }
    ctx->pc = 0x2852B8u;
    // 0x2852b8: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x2852B8u;
    SET_GPR_U32(ctx, 31, 0x2852C0u);
    ctx->pc = 0x2852BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2852B8u;
    // 0x2852bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2852B8u, 0x2852C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852C0u;
label_2852c0:
    // 0x2852c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2852c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2852c8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2852C8u;
    {
        const bool branch_taken_0x2852c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852C8u;
        // 0x2852cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852c8) {
            ctx->pc = 0x2853FCu;
            goto label_2853fc;
        }
    }
    ctx->pc = 0x2852D0u;
label_2852d0:
    // 0x2852d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2852d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2852d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2852d8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2852dc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2852dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2852e0: 0x2642023  subu        $a0, $s3, $a0
    ctx->pc = 0x2852e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2852e4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x2852e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2852ec: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x2852ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2852f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2852f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2852f4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2852f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2852f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2852fc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2852fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285300u;
    {
        const bool branch_taken_0x285300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285300u;
        // 0x285304: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285300) {
            ctx->pc = 0x28531Cu;
            goto label_28531c;
        }
    }
    ctx->pc = 0x285308u;
    // 0x285308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28530c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28530Cu;
    SET_GPR_U32(ctx, 31, 0x285314u);
    ctx->pc = 0x285310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28530Cu;
    // 0x285310: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28530Cu, 0x285314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285314u;
label_285314:
    // 0x285314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285314u;
    {
        const bool branch_taken_0x285314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285314u;
        // 0x285318: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285314) {
            ctx->pc = 0x285328u;
            goto label_285328;
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28531cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285320: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x285320u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285324: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x285324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285328:
    // 0x285328: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28532c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x28532cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285330: 0x12130008  beq         $s0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x285330u;
    {
        const bool branch_taken_0x285330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x285334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285330u;
        // 0x285334: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285330) {
            ctx->pc = 0x285354u;
            goto label_285354;
        }
    }
    ctx->pc = 0x285338u;
label_285338:
    // 0x285338: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285338u;
    {
        const bool branch_taken_0x285338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285338u;
        // 0x28533c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285338) {
            ctx->pc = 0x285348u;
            goto label_285348;
        }
    }
    ctx->pc = 0x285340u;
    // 0x285340: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x285340u;
    SET_GPR_U32(ctx, 31, 0x285348u);
    ctx->pc = 0x285344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285340u;
    // 0x285344: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x285340u, 0x285348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285348u;
label_285348:
    // 0x285348: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28534c: 0x1613fffa  bne         $s0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28534Cu;
    {
        const bool branch_taken_0x28534c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x285350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28534Cu;
        // 0x285350: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28534c) {
            ctx->pc = 0x285338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285338;
        }
    }
    ctx->pc = 0x285354u;
label_285354:
    // 0x285354: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x285354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28535c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28535Cu;
    {
        const bool branch_taken_0x28535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x285360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28535Cu;
        // 0x285360: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28535c) {
            ctx->pc = 0x28537Cu;
            goto label_28537c;
        }
    }
    ctx->pc = 0x285364u;
    // 0x285364: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x285364u;
    {
        const bool branch_taken_0x285364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285364u;
        // 0x285368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285364) {
            ctx->pc = 0x285374u;
            goto label_285374;
        }
    }
    ctx->pc = 0x28536Cu;
    // 0x28536c: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x28536Cu;
    SET_GPR_U32(ctx, 31, 0x285374u);
    ctx->pc = 0x285370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28536Cu;
    // 0x285370: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x28536Cu, 0x285374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285374u;
label_285374:
    // 0x285374: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x285374u;
    {
        const bool branch_taken_0x285374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285374u;
        // 0x285378: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285374) {
            ctx->pc = 0x2853A8u;
            goto label_2853a8;
        }
    }
    ctx->pc = 0x28537Cu;
label_28537c:
    // 0x28537c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28537cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285380: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x285380u;
    {
        const bool branch_taken_0x285380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285380u;
        // 0x285384: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285380) {
            ctx->pc = 0x2853A4u;
            goto label_2853a4;
        }
    }
    ctx->pc = 0x285388u;
label_285388:
    // 0x285388: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285388u;
    {
        const bool branch_taken_0x285388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285388u;
        // 0x28538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285388) {
            ctx->pc = 0x285398u;
            goto label_285398;
        }
    }
    ctx->pc = 0x285390u;
    // 0x285390: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x285390u;
    SET_GPR_U32(ctx, 31, 0x285398u);
    ctx->pc = 0x285394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285390u;
    // 0x285394: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x285390u, 0x285398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285398u;
label_285398:
    // 0x285398: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x285398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28539c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28539Cu;
    {
        const bool branch_taken_0x28539c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2853A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28539Cu;
        // 0x2853a0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28539c) {
            ctx->pc = 0x285388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285388;
        }
    }
    ctx->pc = 0x2853A4u;
label_2853a4:
    // 0x2853a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2853a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2853a8:
    // 0x2853a8: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x2853a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2853ac: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2853b0: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2853B0u;
    {
        const bool branch_taken_0x2853b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2853b0) {
            ctx->pc = 0x2853B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2853B0u;
            // 0x2853b4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2853DCu;
            goto label_2853dc;
        }
    }
    ctx->pc = 0x2853B8u;
    // 0x2853b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2853b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853bc: 0x0  nop
    ctx->pc = 0x2853bcu;
    // NOP
label_2853c0:
    // 0x2853c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2853C0u;
    SET_GPR_U32(ctx, 31, 0x2853C8u);
    ctx->pc = 0x2853C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2853C0u;
    // 0x2853c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2853C0u, 0x2853C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853C8u;
label_2853c8:
    // 0x2853c8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2853c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2853cc: 0x0  nop
    ctx->pc = 0x2853ccu;
    // NOP
    // 0x2853d0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2853D0u;
    {
        const bool branch_taken_0x2853d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853D0u;
        // 0x2853d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853d0) {
            ctx->pc = 0x2853C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2853c0;
        }
    }
    ctx->pc = 0x2853D8u;
    // 0x2853d8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2853dc:
    // 0x2853dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2853DCu;
    {
        const bool branch_taken_0x2853dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853DCu;
        // 0x2853e0: 0x2f51021  addu        $v0, $s7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853dc) {
            ctx->pc = 0x2853F0u;
            goto label_2853f0;
        }
    }
    ctx->pc = 0x2853E4u;
    // 0x2853e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2853E4u;
    SET_GPR_U32(ctx, 31, 0x2853ECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2853E4u, 0x2853ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853ECu;
label_2853ec:
    // 0x2853ec: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_2853f0:
    // 0x2853f0: 0xaed50000  sw          $s5, 0x0($s6)
    ctx->pc = 0x2853f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
    // 0x2853f4: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x2853f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x2853f8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x2853f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
label_2853fc:
    // 0x2853fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2853fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285400: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x285400u;
    SET_GPR_U32(ctx, 31, 0x285408u);
    ctx->pc = 0x285404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285400u;
    // 0x285404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x285400u, 0x285408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285408u;
label_285408:
    // 0x285408: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x285408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28540c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x285410: 0x8c6290d8  lw          $v0, -0x6F28($v1)
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x285414: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x285414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285418: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x285418u;
    {
        const bool branch_taken_0x285418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285418u;
        // 0x28541c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285418) {
            ctx->pc = 0x285288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285288;
        }
    }
    ctx->pc = 0x285420u;
label_285420:
    // 0x285420: 0x8fb50038  lw          $s5, 0x38($sp)
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x285424: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x285424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x285428: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x285428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x28542c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x285430: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x285430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x285434: 0x24848f20  addiu       $a0, $a0, -0x70E0
    ctx->pc = 0x285434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x285438: 0x24428ed8  addiu       $v0, $v0, -0x7128
    ctx->pc = 0x285438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938328));
    // 0x28543c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x28543cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x285440: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x285440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285444: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x285444u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285448: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x285448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28544c: 0xa49821  addu        $s3, $a1, $a0
    ctx->pc = 0x28544cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x285450: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x285450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285454: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x285454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285458: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x285458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x28545c: 0x0  nop
    ctx->pc = 0x28545cu;
    // NOP
label_285460:
    // 0x285460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x285464: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x285464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285468: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28546c: 0x2446a9a8  addiu       $a2, $v0, -0x5658
    ctx->pc = 0x28546cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945192));
    // 0x285470: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x285470u;
    SET_GPR_U32(ctx, 31, 0x285478u);
    ctx->pc = 0x285474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285470u;
    // 0x285474: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x285470u, 0x285478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285478u;
label_285478:
    // 0x285478: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x285478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28547c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x285480: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x285480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
    // 0x285484: 0x8c6290d8  lw          $v0, -0x6F28($v1)
    ctx->pc = 0x285484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x285488: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x285488u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28548c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285494: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x285494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x285498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x285498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28549c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28549cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2854a0: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2854a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2854a4: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2854A4u;
    {
        const bool branch_taken_0x2854a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2854A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854A4u;
        // 0x2854a8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854a4) {
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x2854ACu;
    // 0x2854ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2854acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2854b0: 0x83aa0010  lb          $t2, 0x10($sp)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2854b4: 0x8c4390d8  lw          $v1, -0x6F28($v0)
    ctx->pc = 0x2854b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x2854b8: 0x24190061  addiu       $t9, $zero, 0x61
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2854bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2854bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2854c0: 0x24180041  addiu       $t8, $zero, 0x41
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2854c4: 0x83a90011  lb          $t1, 0x11($sp)
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2854c8: 0x2414005f  addiu       $s4, $zero, 0x5F
    ctx->pc = 0x2854c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2854cc: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2854ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2854d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2854d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2854d4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2854d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2854d8: 0x240e0069  addiu       $t6, $zero, 0x69
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2854dc: 0x240d0049  addiu       $t5, $zero, 0x49
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2854e0: 0x240c006f  addiu       $t4, $zero, 0x6F
    ctx->pc = 0x2854e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2854e4: 0x240b004f  addiu       $t3, $zero, 0x4F
    ctx->pc = 0x2854e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2854e8:
    // 0x2854e8: 0x85060004  lh          $a2, 0x4($t0)
    ctx->pc = 0x2854e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2854ec: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2854ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2854f0: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2854F0u;
    {
        const bool branch_taken_0x2854f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2854f0) {
            ctx->pc = 0x2854F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854F0u;
            // 0x2854f4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x2854F8u;
    // 0x2854f8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2854fc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2854fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x285500: 0x50590004  beql        $v0, $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x285500u;
    {
        const bool branch_taken_0x285500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        if (branch_taken_0x285500) {
            ctx->pc = 0x285504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285500u;
            // 0x285504: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285514u;
            goto label_285514;
        }
    }
    ctx->pc = 0x285508u;
    // 0x285508: 0x5458001c  bnel        $v0, $t8, . + 4 + (0x1C << 2)
    ctx->pc = 0x285508u;
    {
        const bool branch_taken_0x285508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        if (branch_taken_0x285508) {
            ctx->pc = 0x28550Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285508u;
            // 0x28550c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x285510u;
    // 0x285510: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x285510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_285514:
    // 0x285514: 0x544a0019  bnel        $v0, $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x285514u;
    {
        const bool branch_taken_0x285514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x285514) {
            ctx->pc = 0x285518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285514u;
            // 0x285518: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x28551Cu;
    // 0x28551c: 0x80820002  lb          $v0, 0x2($a0)
    ctx->pc = 0x28551cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x285520: 0x54490016  bnel        $v0, $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x285520u;
    {
        const bool branch_taken_0x285520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x285520) {
            ctx->pc = 0x285524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285520u;
            // 0x285524: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x285528u;
    // 0x285528: 0x80850003  lb          $a1, 0x3($a0)
    ctx->pc = 0x285528u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x28552c: 0x54b40013  bnel        $a1, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x28552Cu;
    {
        const bool branch_taken_0x28552c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        if (branch_taken_0x28552c) {
            ctx->pc = 0x285530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28552Cu;
            // 0x285530: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x285534u;
    // 0x285534: 0x50cf0005  beql        $a2, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x285534u;
    {
        const bool branch_taken_0x285534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        if (branch_taken_0x285534) {
            ctx->pc = 0x285538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285534u;
            // 0x285538: 0x80820004  lb          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28554Cu;
            goto label_28554c;
        }
    }
    ctx->pc = 0x28553Cu;
    // 0x28553c: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x28553cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x285540: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x285540u;
    {
        const bool branch_taken_0x285540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x285540) {
            ctx->pc = 0x285544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285540u;
            // 0x285544: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285578u;
            goto label_285578;
        }
    }
    ctx->pc = 0x285548u;
    // 0x285548: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x285548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_28554c:
    // 0x28554c: 0x504e000a  beql        $v0, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x28554Cu;
    {
        const bool branch_taken_0x28554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x28554c) {
            ctx->pc = 0x285550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28554Cu;
            // 0x285550: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285578u;
            goto label_285578;
        }
    }
    ctx->pc = 0x285554u;
    // 0x285554: 0x144d0003  bne         $v0, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x285554u;
    {
        const bool branch_taken_0x285554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x285554) {
            ctx->pc = 0x285564u;
            goto label_285564;
        }
    }
    ctx->pc = 0x28555Cu;
    // 0x28555c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28555Cu;
    {
        const bool branch_taken_0x28555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28555Cu;
        // 0x285560: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28555c) {
            ctx->pc = 0x285578u;
            goto label_285578;
        }
    }
    ctx->pc = 0x285564u;
label_285564:
    // 0x285564: 0x504c0004  beql        $v0, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x285564u;
    {
        const bool branch_taken_0x285564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x285564) {
            ctx->pc = 0x285568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285564u;
            // 0x285568: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285578u;
            goto label_285578;
        }
    }
    ctx->pc = 0x28556Cu;
    // 0x28556c: 0x544b0003  bnel        $v0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28556Cu;
    {
        const bool branch_taken_0x28556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x28556c) {
            ctx->pc = 0x285570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28556Cu;
            // 0x285570: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28557Cu;
            goto label_28557c;
        }
    }
    ctx->pc = 0x285574u;
    // 0x285574: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x285574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
label_285578:
    // 0x285578: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28557c:
    // 0x28557c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x28557cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285580: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x285580u;
    {
        const bool branch_taken_0x285580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285580u;
        // 0x285584: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285580) {
            ctx->pc = 0x2854E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2854e8;
        }
    }
    ctx->pc = 0x285588u;
label_285588:
    // 0x285588: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28558c: 0x12140012  beq         $s0, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x28558Cu;
    {
        const bool branch_taken_0x28558c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x285590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28558Cu;
        // 0x285590: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28558c) {
            ctx->pc = 0x2855D8u;
            goto label_2855d8;
        }
    }
    ctx->pc = 0x285594u;
    // 0x285594: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x285594u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x285598: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x285598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x28559c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2855a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2855a4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2855a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2855a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2855ac: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2855acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2855b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2855b4: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2855B4u;
    SET_GPR_U32(ctx, 31, 0x2855BCu);
    ctx->pc = 0x2855B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855B4u;
    // 0x2855b8: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2855B4u, 0x2855BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855BCu;
label_2855bc:
    // 0x2855bc: 0x26d60014  addiu       $s6, $s6, 0x14
    ctx->pc = 0x2855bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x2855c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2855c4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2855c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2855cc: 0x2465a9b0  addiu       $a1, $v1, -0x5650
    ctx->pc = 0x2855ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945200));
    // 0x2855d0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2855D0u;
    SET_GPR_U32(ctx, 31, 0x2855D8u);
    ctx->pc = 0x2855D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855D0u;
    // 0x2855d4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2855D0u, 0x2855D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855D8u;
label_2855d8:
    // 0x2855d8: 0x13d40012  beq         $fp, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2855D8u;
    {
        const bool branch_taken_0x2855d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 20));
        ctx->pc = 0x2855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855D8u;
        // 0x2855dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855d8) {
            ctx->pc = 0x285624u;
            goto label_285624;
        }
    }
    ctx->pc = 0x2855E0u;
    // 0x2855e0: 0x1e80c0  sll         $s0, $fp, 3
    ctx->pc = 0x2855e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2855e4: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x2855e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x2855e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2855e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2855ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2855f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2855f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2855f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2855f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2855f8: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2855fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285600: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x285600u;
    SET_GPR_U32(ctx, 31, 0x285608u);
    ctx->pc = 0x285604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285600u;
    // 0x285604: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x285600u, 0x285608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285608u;
label_285608:
    // 0x285608: 0x26d60014  addiu       $s6, $s6, 0x14
    ctx->pc = 0x285608u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x28560c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285610: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x285610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x285614: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x285614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x285618: 0x2445a9b0  addiu       $a1, $v0, -0x5650
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945200));
    // 0x28561c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28561Cu;
    SET_GPR_U32(ctx, 31, 0x285624u);
    ctx->pc = 0x285620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28561Cu;
    // 0x285620: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28561Cu, 0x285624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285624u;
label_285624:
    // 0x285624: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x285628: 0x10740012  beq         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x285628u;
    {
        const bool branch_taken_0x285628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x28562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285628u;
        // 0x28562c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285628) {
            ctx->pc = 0x285674u;
            goto label_285674;
        }
    }
    ctx->pc = 0x285630u;
    // 0x285630: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x285630u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x285634: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x285634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x285638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28563c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x285640: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x285640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x285644: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285648: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x285648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x28564c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28564cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x285650: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x285650u;
    SET_GPR_U32(ctx, 31, 0x285658u);
    ctx->pc = 0x285654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285650u;
    // 0x285654: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x285650u, 0x285658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285658u;
label_285658:
    // 0x285658: 0x26d60014  addiu       $s6, $s6, 0x14
    ctx->pc = 0x285658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x28565c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285660: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x285660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x285664: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x285664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x285668: 0x2445a9b0  addiu       $a1, $v0, -0x5650
    ctx->pc = 0x285668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945200));
    // 0x28566c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28566Cu;
    SET_GPR_U32(ctx, 31, 0x285674u);
    ctx->pc = 0x285670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28566Cu;
    // 0x285670: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28566Cu, 0x285674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285674u;
label_285674:
    // 0x285674: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x285674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x285678: 0x1e1827  nor         $v1, $zero, $fp
    ctx->pc = 0x285678u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x28567c: 0x8fb40050  lw          $s4, 0x50($sp)
    ctx->pc = 0x28567cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285680: 0x43b80b  movn        $s7, $v0, $v1
    ctx->pc = 0x285680u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x285684: 0x2a820080  slti        $v0, $s4, 0x80
    ctx->pc = 0x285684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x285688: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x285688u;
    {
        const bool branch_taken_0x285688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285688u;
        // 0x28568c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285688) {
            ctx->pc = 0x285460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285460;
        }
    }
    ctx->pc = 0x285690u;
    // 0x285690: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x285690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x285694: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x285694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28569c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2856a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2856a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2856a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2856A4u;
    {
        const bool branch_taken_0x2856a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856A4u;
        // 0x2856a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856a4) {
            ctx->pc = 0x28572Cu;
            goto label_28572c;
        }
    }
    ctx->pc = 0x2856ACu;
    // 0x2856ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2856acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2856b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2856b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2856b4: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x2856b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2856b8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2856b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2856bc: 0x24848ed8  addiu       $a0, $a0, -0x7128
    ctx->pc = 0x2856bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938328));
    // 0x2856c0: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x2856c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
    // 0x2856c4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2856c8: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2856cc: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x2856ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2856d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2856d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856d4: 0x0  nop
    ctx->pc = 0x2856d4u;
    // NOP
label_2856d8:
    // 0x2856d8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2856d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2856dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2856e0: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x2856e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2856e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2856E4u;
    {
        const bool branch_taken_0x2856e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856E4u;
        // 0x2856e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856e4) {
            ctx->pc = 0x285708u;
            goto label_285708;
        }
    }
    ctx->pc = 0x2856ECu;
    // 0x2856ec: 0xae570000  sw          $s7, 0x0($s2)
    ctx->pc = 0x2856ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x2856f0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2856f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2856f4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2856f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2856f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2856f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2856fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285700: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x285700u;
    SET_GPR_U32(ctx, 31, 0x285708u);
    ctx->pc = 0x285704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285700u;
    // 0x285704: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x285700u, 0x285708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285708u;
label_285708:
    // 0x285708: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28570c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28570cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x285710: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x285710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285714: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285718: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28571c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x285720: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x285720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x285724: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x285724u;
    {
        const bool branch_taken_0x285724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285724u;
        // 0x285728: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285724) {
            ctx->pc = 0x2856D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2856d8;
        }
    }
    ctx->pc = 0x28572Cu;
label_28572c:
    // 0x28572c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28572cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285730: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x285730u;
    {
        const bool branch_taken_0x285730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x285734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285730u;
        // 0x285734: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285730) {
            ctx->pc = 0x285758u;
            goto label_285758;
        }
    }
    ctx->pc = 0x285738u;
    // 0x285738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28573c: 0x0  nop
    ctx->pc = 0x28573cu;
    // NOP
label_285740:
    // 0x285740: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x285740u;
    SET_GPR_U32(ctx, 31, 0x285748u);
    ctx->pc = 0x285744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285740u;
    // 0x285744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x285740u, 0x285748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285748u;
label_285748:
    // 0x285748: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28574c: 0x0  nop
    ctx->pc = 0x28574cu;
    // NOP
    // 0x285750: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x285750u;
    {
        const bool branch_taken_0x285750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x285754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285750u;
        // 0x285754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285750) {
            ctx->pc = 0x285740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285740;
        }
    }
    ctx->pc = 0x285758u;
label_285758:
    // 0x285758: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x285758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28575c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28575Cu;
    {
        const bool branch_taken_0x28575c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x285760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28575Cu;
        // 0x285760: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28575c) {
            ctx->pc = 0x285770u;
            goto label_285770;
        }
    }
    ctx->pc = 0x285764u;
    // 0x285764: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x285764u;
    SET_GPR_U32(ctx, 31, 0x28576Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x285764u, 0x28576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28576Cu;
label_28576c:
    // 0x28576c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x28576cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_285770:
    // 0x285770: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x285770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x285774: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x285774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285778: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x285778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x28577c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x28577cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285780: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x285780u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x285784: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x285784u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285788: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x285788u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x28578c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x28578cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285790: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x285790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x285794: 0x3e00008  jr          $ra
    ctx->pc = 0x285794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285794u;
        // 0x285798: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28579Cu;
    // 0x28579c: 0x0  nop
    ctx->pc = 0x28579cu;
    // NOP
    ctx->pc = 0x2857a0u;
}
