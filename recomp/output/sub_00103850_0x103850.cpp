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

// Function: sub_00103850
// Address: 0x103850 - 0x103b28
void sub_00103850_0x103850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103850_0x103850");
#endif

    switch (ctx->pc) {
        case 0x10388cu: goto label_10388c;
        case 0x1038a4u: goto label_1038a4;
        case 0x1038bcu: goto label_1038bc;
        case 0x1038ccu: goto label_1038cc;
        case 0x1038e8u: goto label_1038e8;
        case 0x1038f8u: goto label_1038f8;
        case 0x103940u: goto label_103940;
        case 0x103948u: goto label_103948;
        case 0x103964u: goto label_103964;
        case 0x103974u: goto label_103974;
        case 0x1039b4u: goto label_1039b4;
        case 0x1039d8u: goto label_1039d8;
        case 0x1039e4u: goto label_1039e4;
        case 0x1039fcu: goto label_1039fc;
        case 0x103a28u: goto label_103a28;
        case 0x103a60u: goto label_103a60;
        case 0x103a9cu: goto label_103a9c;
        case 0x103ac0u: goto label_103ac0;
        case 0x103ac8u: goto label_103ac8;
        case 0x103ae0u: goto label_103ae0;
        case 0x103aecu: goto label_103aec;
        default: break;
    }

    ctx->pc = 0x103850u;

    // 0x103850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x103850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x103854: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x103854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x103858: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x103858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x10385c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10385cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103860: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x103860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x103864: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x103864u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103868: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x103868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x10386c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x103870: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x103870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x103874: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x103874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x103878: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x103878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10387c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x10387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x103880: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x103880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x103884: 0xc0414a2  jal         func_105288
    ctx->pc = 0x103884u;
    SET_GPR_U32(ctx, 31, 0x10388Cu);
    ctx->pc = 0x103888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103884u;
    // 0x103888: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x103884u, 0x10388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10388Cu;
label_10388c:
    // 0x10388c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10388Cu;
    {
        const bool branch_taken_0x10388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10388Cu;
        // 0x103890: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10388c) {
            ctx->pc = 0x1038ACu;
            goto label_1038ac;
        }
    }
    ctx->pc = 0x103894u;
    // 0x103894: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x103894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x103898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10389c: 0xc040ff6  jal         func_103FD8
    ctx->pc = 0x10389Cu;
    SET_GPR_U32(ctx, 31, 0x1038A4u);
    ctx->pc = 0x1038A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10389Cu;
    // 0x1038a0: 0xe440071c  swc1        $f0, 0x71C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1820), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FD8u, 0x10389Cu, 0x1038A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038A4u;
label_1038a4:
    // 0x1038a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1038A4u;
    {
        const bool branch_taken_0x1038a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1038a4) {
            ctx->pc = 0x1038B4u;
            goto label_1038b4;
        }
    }
    ctx->pc = 0x1038ACu;
label_1038ac:
    // 0x1038ac: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1038ACu;
    {
        const bool branch_taken_0x1038ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038ACu;
        // 0x1038b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038ac) {
            ctx->pc = 0x103AF0u;
            goto label_103af0;
        }
    }
    ctx->pc = 0x1038B4u;
label_1038b4:
    // 0x1038b4: 0xc0f6784  jal         func_3D9E10
    ctx->pc = 0x1038B4u;
    SET_GPR_U32(ctx, 31, 0x1038BCu);
    ctx->pc = 0x1038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038B4u;
    // 0x1038b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E10u, 0x1038B4u, 0x1038BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038BCu;
label_1038bc:
    // 0x1038bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1038bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1038c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038c4: 0xc0f67a0  jal         func_3D9E80
    ctx->pc = 0x1038C4u;
    SET_GPR_U32(ctx, 31, 0x1038CCu);
    ctx->pc = 0x1038C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038C4u;
    // 0x1038c8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E80u, 0x1038C4u, 0x1038CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038CCu;
label_1038cc:
    // 0x1038cc: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x1038ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x1038d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1038d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1038d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1038d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1038d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1038dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1038e0: 0xc0f696e  jal         func_3DA5B8
    ctx->pc = 0x1038E0u;
    SET_GPR_U32(ctx, 31, 0x1038E8u);
    ctx->pc = 0x1038E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038E0u;
    // 0x1038e4: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA5B8u, 0x1038E0u, 0x1038E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038E8u;
label_1038e8:
    // 0x1038e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1038e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1038ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1038ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038f0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1038F0u;
    SET_GPR_U32(ctx, 31, 0x1038F8u);
    ctx->pc = 0x1038F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038F0u;
    // 0x1038f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1038F0u, 0x1038F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038F8u;
label_1038f8:
    // 0x1038f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1038f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1038fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1038fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103900: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x103900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103904: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x103904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103908: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103908u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10390c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10390cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103910: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x103910u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103914: 0x3c014229  lui         $at, 0x4229
    ctx->pc = 0x103914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16937 << 16));
    // 0x103918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10391c: 0x0  nop
    ctx->pc = 0x10391cu;
    // NOP
    // 0x103920: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x103920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103924: 0x0  nop
    ctx->pc = 0x103924u;
    // NOP
    // 0x103928: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x103928u;
    {
        const bool branch_taken_0x103928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103928u;
        // 0x10392c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103928) {
            ctx->pc = 0x103934u;
            goto label_103934;
        }
    }
    ctx->pc = 0x103930u;
    // 0x103930: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x103930u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_103934:
    // 0x103934: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x103934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103938: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x103938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10393c: 0x27be0034  addiu       $fp, $sp, 0x34
    ctx->pc = 0x10393cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_103940:
    // 0x103940: 0xc0f6986  jal         func_3DA618
    ctx->pc = 0x103940u;
    SET_GPR_U32(ctx, 31, 0x103948u);
    ctx->pc = 0x103944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103940u;
    // 0x103944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA618u, 0x103940u, 0x103948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103948u;
label_103948:
    // 0x103948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103948u;
    {
        const bool branch_taken_0x103948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103948u;
        // 0x10394c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103948) {
            ctx->pc = 0x103958u;
            goto label_103958;
        }
    }
    ctx->pc = 0x103950u;
    // 0x103950: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x103950u;
    {
        const bool branch_taken_0x103950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103950u;
        // 0x103954: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103950) {
            ctx->pc = 0x103AB8u;
            goto label_103ab8;
        }
    }
    ctx->pc = 0x103958u;
label_103958:
    // 0x103958: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x103958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10395c: 0xc0f69b4  jal         func_3DA6D0
    ctx->pc = 0x10395Cu;
    SET_GPR_U32(ctx, 31, 0x103964u);
    ctx->pc = 0x103960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10395Cu;
    // 0x103960: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA6D0u, 0x10395Cu, 0x103964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103964u;
label_103964:
    // 0x103964: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x103964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103968: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x103968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10396c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10396Cu;
    SET_GPR_U32(ctx, 31, 0x103974u);
    ctx->pc = 0x103970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10396Cu;
    // 0x103970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10396Cu, 0x103974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103974u;
label_103974:
    // 0x103974: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x103974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103978: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x103978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10397c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x10397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103980: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103980u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103984: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103984u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103988: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x103988u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10398c: 0x3c014038  lui         $at, 0x4038
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16440 << 16));
    // 0x103990: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x103990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x103994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103998: 0x0  nop
    ctx->pc = 0x103998u;
    // NOP
    // 0x10399c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10399cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1039a0: 0x0  nop
    ctx->pc = 0x1039a0u;
    // NOP
    // 0x1039a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1039A4u;
    {
        const bool branch_taken_0x1039a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1039A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039A4u;
        // 0x1039a8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039a4) {
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x1039ACu;
    // 0x1039ac: 0xc0414a2  jal         func_105288
    ctx->pc = 0x1039ACu;
    SET_GPR_U32(ctx, 31, 0x1039B4u);
    ctx->pc = 0x1039B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039ACu;
    // 0x1039b0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x1039ACu, 0x1039B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039B4u;
label_1039b4:
    // 0x1039b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1039B4u;
    {
        const bool branch_taken_0x1039b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1039B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039B4u;
        // 0x1039b8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039b4) {
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x1039BCu;
    // 0x1039bc: 0x8fb60030  lw          $s6, 0x30($sp)
    ctx->pc = 0x1039bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1039c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1039C0u;
    {
        const bool branch_taken_0x1039c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039C0u;
        // 0x1039c4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039c0) {
            ctx->pc = 0x103AB8u;
            goto label_103ab8;
        }
    }
    ctx->pc = 0x1039C8u;
label_1039c8:
    // 0x1039c8: 0x90530022  lbu         $s3, 0x22($v0)
    ctx->pc = 0x1039c8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x1039cc: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x1039CCu;
    {
        const bool branch_taken_0x1039cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039CCu;
        // 0x1039d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039cc) {
            ctx->pc = 0x103AB8u;
            goto label_103ab8;
        }
    }
    ctx->pc = 0x1039D4u;
    // 0x1039d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1039d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1039d8:
    // 0x1039d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1039d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039dc: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1039DCu;
    SET_GPR_U32(ctx, 31, 0x1039E4u);
    ctx->pc = 0x1039E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039DCu;
    // 0x1039e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1039DCu, 0x1039E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039E4u;
label_1039e4:
    // 0x1039e4: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1039e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1039e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1039e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1039ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1039ECu;
    {
        const bool branch_taken_0x1039ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039ECu;
        // 0x1039f0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039ec) {
            ctx->pc = 0x103A00u;
            goto label_103a00;
        }
    }
    ctx->pc = 0x1039F4u;
    // 0x1039f4: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1039F4u;
    SET_GPR_U32(ctx, 31, 0x1039FCu);
    ctx->pc = 0x1039F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039F4u;
    // 0x1039f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1039F4u, 0x1039FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039FCu;
label_1039fc:
    // 0x1039fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1039fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103a00:
    // 0x103a00: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x103A00u;
    {
        const bool branch_taken_0x103a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x103a00) {
            ctx->pc = 0x103A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A00u;
            // 0x103a04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103A08u;
    // 0x103a08: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x103a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x103a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x103a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x103a10: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x103A10u;
    {
        const bool branch_taken_0x103a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103a10) {
            ctx->pc = 0x103A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A10u;
            // 0x103a14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103A18u;
    // 0x103a18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x103a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103a1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x103a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a20: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103A20u;
    SET_GPR_U32(ctx, 31, 0x103A28u);
    ctx->pc = 0x103A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A20u;
    // 0x103a24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103A20u, 0x103A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A28u;
label_103a28:
    // 0x103a28: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x103a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103a2c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x103a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103a30: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x103a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103a34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103a34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103a38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103a38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103a3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x103a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103a40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x103a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103a44: 0x0  nop
    ctx->pc = 0x103a44u;
    // NOP
    // 0x103a48: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x103A48u;
    {
        const bool branch_taken_0x103a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103a48) {
            ctx->pc = 0x103A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A48u;
            // 0x103a4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103A50u;
    // 0x103a50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x103a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a58: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103A58u;
    SET_GPR_U32(ctx, 31, 0x103A60u);
    ctx->pc = 0x103A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A58u;
    // 0x103a5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103A58u, 0x103A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A60u;
label_103a60:
    // 0x103a60: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x103a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103a64: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x103a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103a68: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x103a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103a6c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103a6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103a70: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103a70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103a74: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x103a74u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103a78: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x103a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x103a7c: 0xc440071c  lwc1        $f0, 0x71C($v0)
    ctx->pc = 0x103a7cu;
    { uint32_t bits = FAST_READ32(0x3F071Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103a80: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x103a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103a84: 0x0  nop
    ctx->pc = 0x103a84u;
    // NOP
    // 0x103a88: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x103A88u;
    {
        const bool branch_taken_0x103a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103a88) {
            ctx->pc = 0x103A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A88u;
            // 0x103a8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103A90u;
    // 0x103a90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a94: 0xc0f696e  jal         func_3DA5B8
    ctx->pc = 0x103A94u;
    SET_GPR_U32(ctx, 31, 0x103A9Cu);
    ctx->pc = 0x103A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A94u;
    // 0x103a98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA5B8u, 0x103A94u, 0x103A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A9Cu;
label_103a9c:
    // 0x103a9c: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x103a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x103aa0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x103aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x103aa4: 0xa202003a  sb          $v0, 0x3A($s0)
    ctx->pc = 0x103aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x103aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_103aac:
    // 0x103aac: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x103ab0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x103AB0u;
    {
        const bool branch_taken_0x103ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB0u;
        // 0x103ab4: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ab0) {
            ctx->pc = 0x1039D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1039d8;
        }
    }
    ctx->pc = 0x103AB8u;
label_103ab8:
    // 0x103ab8: 0x12a0ffa1  beqz        $s5, . + 4 + (-0x5F << 2)
    ctx->pc = 0x103AB8u;
    {
        const bool branch_taken_0x103ab8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x103ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB8u;
        // 0x103abc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ab8) {
            ctx->pc = 0x103940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103940;
        }
    }
    ctx->pc = 0x103AC0u;
label_103ac0:
    // 0x103ac0: 0xc0f69b4  jal         func_3DA6D0
    ctx->pc = 0x103AC0u;
    SET_GPR_U32(ctx, 31, 0x103AC8u);
    ctx->pc = 0x103AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AC0u;
    // 0x103ac4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA6D0u, 0x103AC0u, 0x103AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AC8u;
label_103ac8:
    // 0x103ac8: 0x0  nop
    ctx->pc = 0x103ac8u;
    // NOP
    // 0x103acc: 0x0  nop
    ctx->pc = 0x103accu;
    // NOP
    // 0x103ad0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x103AD0u;
    {
        const bool branch_taken_0x103ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AD0u;
        // 0x103ad4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ad0) {
            ctx->pc = 0x103AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103ac0;
        }
    }
    ctx->pc = 0x103AD8u;
    // 0x103ad8: 0xc0f69d6  jal         func_3DA758
    ctx->pc = 0x103AD8u;
    SET_GPR_U32(ctx, 31, 0x103AE0u);
    ctx->pc = 0x103ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AD8u;
    // 0x103adc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA758u, 0x103AD8u, 0x103AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AE0u;
label_103ae0:
    // 0x103ae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ae4: 0xc0f6774  jal         func_3D9DD0
    ctx->pc = 0x103AE4u;
    SET_GPR_U32(ctx, 31, 0x103AECu);
    ctx->pc = 0x103AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AE4u;
    // 0x103ae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DD0u, 0x103AE4u, 0x103AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AECu;
label_103aec:
    // 0x103aec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x103aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_103af0:
    // 0x103af0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x103af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103af4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x103af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103af8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x103af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103afc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x103afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x103b00: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x103b00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103b04: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x103b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x103b08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x103b08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103b0c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x103b0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x103b10: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x103b10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103b14: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x103b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x103b18: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x103b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x103B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B1Cu;
        // 0x103b20: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103B24u;
    // 0x103b24: 0x0  nop
    ctx->pc = 0x103b24u;
    // NOP
    ctx->pc = 0x103b28u;
}
