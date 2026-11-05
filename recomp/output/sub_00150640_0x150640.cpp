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

// Function: sub_00150640
// Address: 0x150640 - 0x150778
void sub_00150640_0x150640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150640_0x150640");
#endif

    switch (ctx->pc) {
        case 0x150664u: goto label_150664;
        case 0x150670u: goto label_150670;
        case 0x150680u: goto label_150680;
        case 0x15068cu: goto label_15068c;
        case 0x1506b0u: goto label_1506b0;
        case 0x1506d4u: goto label_1506d4;
        case 0x1506e8u: goto label_1506e8;
        case 0x150708u: goto label_150708;
        case 0x150760u: goto label_150760;
        default: break;
    }

    ctx->pc = 0x150640u;

    // 0x150640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150644: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150648: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x150648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15064c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x150650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150654: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x150654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x150658: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x150658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15065c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15065Cu;
    SET_GPR_U32(ctx, 31, 0x150664u);
    ctx->pc = 0x150660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15065Cu;
    // 0x150660: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15065Cu, 0x150664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150664u;
label_150664:
    // 0x150664: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150668: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150668u;
    SET_GPR_U32(ctx, 31, 0x150670u);
    ctx->pc = 0x15066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150668u;
    // 0x15066c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150668u, 0x150670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150670u;
label_150670:
    // 0x150670: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150674: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x150674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x150678: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150678u;
    SET_GPR_U32(ctx, 31, 0x150680u);
    ctx->pc = 0x15067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150678u;
    // 0x15067c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150678u, 0x150680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150680u;
label_150680:
    // 0x150680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150684: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150684u;
    SET_GPR_U32(ctx, 31, 0x15068Cu);
    ctx->pc = 0x150688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150684u;
    // 0x150688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150684u, 0x15068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15068Cu;
label_15068c:
    // 0x15068c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15068cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150690: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15069c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15069cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1506a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1506a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506a8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1506A8u;
    SET_GPR_U32(ctx, 31, 0x1506B0u);
    ctx->pc = 0x1506ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506A8u;
    // 0x1506ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1506A8u, 0x1506B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506B0u;
label_1506b0:
    // 0x1506b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1506b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1506b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506b8: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x1506b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x1506bc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1506bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1506c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1506c4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1506c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1506c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1506cc: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1506CCu;
    SET_GPR_U32(ctx, 31, 0x1506D4u);
    ctx->pc = 0x1506D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506CCu;
    // 0x1506d0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1506CCu, 0x1506D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506D4u;
label_1506d4:
    // 0x1506d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1506d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1506d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1506dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506e0: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1506E0u;
    SET_GPR_U32(ctx, 31, 0x1506E8u);
    ctx->pc = 0x1506E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506E0u;
    // 0x1506e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1506E0u, 0x1506E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506E8u;
label_1506e8:
    // 0x1506e8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1506ec: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1506ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1506f0: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1506f4: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x1506f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x1506f8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1506fc: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x150700: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150700u;
    SET_GPR_U32(ctx, 31, 0x150708u);
    ctx->pc = 0x150704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150700u;
    // 0x150704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150700u, 0x150708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150708u;
label_150708:
    // 0x150708: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x15070c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x15070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x150710: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x150710u;
    {
        const bool branch_taken_0x150710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150710u;
        // 0x150714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150710) {
            ctx->pc = 0x150760u;
            goto label_150760;
        }
    }
    ctx->pc = 0x150718u;
    // 0x150718: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x15071c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x150720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150728: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x150728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15072c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x15072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x150730: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x150730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x150734: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x150734u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x150738: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x150738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15073c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x15073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150740: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x150740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150744: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x150744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x150748: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x150748u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x15074c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x15074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150750: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x150750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x150754: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x150754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x150758: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x150758u;
    SET_GPR_U32(ctx, 31, 0x150760u);
    ctx->pc = 0x15075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150758u;
    // 0x15075c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x150758u, 0x150760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150760u;
label_150760:
    // 0x150760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x150760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150764: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x150764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x150768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15076c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150770: 0x3e00008  jr          $ra
    ctx->pc = 0x150770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150770u;
        // 0x150774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150778u;
}
