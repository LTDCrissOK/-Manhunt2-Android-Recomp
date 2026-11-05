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

// Function: sub_0024C738
// Address: 0x24c738 - 0x24c900
void sub_0024C738_0x24c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C738_0x24c738");
#endif

    switch (ctx->pc) {
        case 0x24c774u: goto label_24c774;
        case 0x24c78cu: goto label_24c78c;
        case 0x24c7a4u: goto label_24c7a4;
        case 0x24c800u: goto label_24c800;
        case 0x24c81cu: goto label_24c81c;
        case 0x24c828u: goto label_24c828;
        case 0x24c848u: goto label_24c848;
        case 0x24c894u: goto label_24c894;
        default: break;
    }

    ctx->pc = 0x24c738u;

    // 0x24c738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24c73c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c740: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24c744: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c748: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x24c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x24c74c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x24c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x24c750: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c754: 0x8c5000c4  lw          $s0, 0xC4($v0)
    ctx->pc = 0x24c754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24c758: 0x12000062  beqz        $s0, . + 4 + (0x62 << 2)
    ctx->pc = 0x24C758u;
    {
        const bool branch_taken_0x24c758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C758u;
        // 0x24c75c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c758) {
            ctx->pc = 0x24C8E4u;
            goto label_24c8e4;
        }
    }
    ctx->pc = 0x24C760u;
    // 0x24c760: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24c764: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24c768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c76c: 0xc07946e  jal         func_1E51B8
    ctx->pc = 0x24C76Cu;
    SET_GPR_U32(ctx, 31, 0x24C774u);
    ctx->pc = 0x24C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C76Cu;
    // 0x24c770: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E51B8u, 0x24C76Cu, 0x24C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C774u;
label_24c774:
    // 0x24c774: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x24c774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x24c778: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24c77c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24c780: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c784: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x24C784u;
    SET_GPR_U32(ctx, 31, 0x24C78Cu);
    ctx->pc = 0x24C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C784u;
    // 0x24c788: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5E88u, 0x24C784u, 0x24C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C78Cu;
label_24c78c:
    // 0x24c78c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x24c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x24c790: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x24c790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24c794: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24c798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c79c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x24C79Cu;
    SET_GPR_U32(ctx, 31, 0x24C7A4u);
    ctx->pc = 0x24C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C79Cu;
    // 0x24c7a0: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x24C79Cu, 0x24C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7A4u;
label_24c7a4:
    // 0x24c7a4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x24c7a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c7a8: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x24c7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24c7ac: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x24c7acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x24c7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7b4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24c7b8: 0xa3a60000  sb          $a2, 0x0($sp)
    ctx->pc = 0x24c7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x24c7bc: 0x24e80040  addiu       $t0, $a3, 0x40
    ctx->pc = 0x24c7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x24c7c0: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x24c7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24c7c4: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x24c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x24c7c8: 0x78e60020  lq          $a2, 0x20($a3)
    ctx->pc = 0x24c7c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24c7cc: 0x7c460020  sq          $a2, 0x20($v0)
    ctx->pc = 0x24c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 6));
    // 0x24c7d0: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x24c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7d4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x24c7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x24c7d8: 0xc4e10040  lwc1        $f1, 0x40($a3)
    ctx->pc = 0x24c7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c7dc: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x24c7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x24c7e0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x24c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7e4: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x24c7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x24c7e8: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x24c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c7ec: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x24c7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x24c7f0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x24c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7f4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x24c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x24c7f8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C7F8u;
    SET_GPR_U32(ctx, 31, 0x24C800u);
    ctx->pc = 0x24C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7F8u;
    // 0x24c7fc: 0xe520000c  swc1        $f0, 0xC($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C7F8u, 0x24C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C800u;
label_24c800:
    // 0x24c800: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24c804: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x24c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c808: 0xc46198f8  lwc1        $f1, -0x6708($v1)
    ctx->pc = 0x24c808u;
    { uint32_t bits = FAST_READ32(0x3F98F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c80c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x24c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24c810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24c810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24c814: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x24C814u;
    SET_GPR_U32(ctx, 31, 0x24C81Cu);
    ctx->pc = 0x24C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C814u;
    // 0x24c818: 0xe62098fc  swc1        $f0, -0x6704($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294940924), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x24C814u, 0x24C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C81Cu;
label_24c81c:
    // 0x24c81c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c820: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24C820u;
    SET_GPR_U32(ctx, 31, 0x24C828u);
    ctx->pc = 0x24C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C820u;
    // 0x24c824: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24C820u, 0x24C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C828u;
label_24c828:
    // 0x24c828: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x24c828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x24c82c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x24c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x24c830: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x24c830u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x24c834: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x24c834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x24c838: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x24c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24c83c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c840: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C840u;
    SET_GPR_U32(ctx, 31, 0x24C848u);
    ctx->pc = 0x24C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C840u;
    // 0x24c844: 0xae500020  sw          $s0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C840u, 0x24C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C848u;
label_24c848:
    // 0x24c848: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c84c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x24c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c850: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24c850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24c854: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x24c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24c858: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24c858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24c85c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x24c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x24c860: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x24c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x24c864: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x24c864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c868: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24c868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x24c86c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x24c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x24c870: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24c870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c874: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x24c874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24c878: 0xc62098fc  lwc1        $f0, -0x6704($s1)
    ctx->pc = 0x24c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c87c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24c880: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x24c884: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x24c884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24c888: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x24c888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24c88c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x24C88Cu;
    SET_GPR_U32(ctx, 31, 0x24C894u);
    ctx->pc = 0x24C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C88Cu;
    // 0x24c890: 0xe4410030  swc1        $f1, 0x30($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x24C88Cu, 0x24C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C894u;
label_24c894:
    // 0x24c894: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x24c894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c898: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24c89c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x24c8a0: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x24c8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24c8a4: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x24c8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x24c8a8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x24c8a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24c8ac: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x24c8acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x24c8b0: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x24c8b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24c8b4: 0x7c440020  sq          $a0, 0x20($v0)
    ctx->pc = 0x24c8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 4));
    // 0x24c8b8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x24c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c8bc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x24c8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x24c8c0: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x24c8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c8c4: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x24c8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x24c8c8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x24c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c8cc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x24c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x24c8d0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x24c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c8d4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x24c8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x24c8d8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x24c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c8dc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x24c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x24c8e0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x24c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_24c8e4:
    // 0x24c8e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24c8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c8e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x24c8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c8ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c8ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c8f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24c8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8F4u;
        // 0x24c8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C8FCu;
    // 0x24c8fc: 0x0  nop
    ctx->pc = 0x24c8fcu;
    // NOP
    ctx->pc = 0x24c900u;
}
