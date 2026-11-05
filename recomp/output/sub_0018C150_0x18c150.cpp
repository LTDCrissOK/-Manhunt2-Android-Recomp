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

// Function: sub_0018C150
// Address: 0x18c150 - 0x18c220
void sub_0018C150_0x18c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C150_0x18c150");
#endif

    switch (ctx->pc) {
        case 0x18c150u: goto label_18c150;
        case 0x18c154u: goto label_18c154;
        case 0x18c158u: goto label_18c158;
        case 0x18c15cu: goto label_18c15c;
        case 0x18c160u: goto label_18c160;
        case 0x18c164u: goto label_18c164;
        case 0x18c168u: goto label_18c168;
        case 0x18c16cu: goto label_18c16c;
        case 0x18c170u: goto label_18c170;
        case 0x18c174u: goto label_18c174;
        case 0x18c178u: goto label_18c178;
        case 0x18c17cu: goto label_18c17c;
        case 0x18c180u: goto label_18c180;
        case 0x18c184u: goto label_18c184;
        case 0x18c188u: goto label_18c188;
        case 0x18c18cu: goto label_18c18c;
        case 0x18c190u: goto label_18c190;
        case 0x18c194u: goto label_18c194;
        case 0x18c198u: goto label_18c198;
        case 0x18c19cu: goto label_18c19c;
        case 0x18c1a0u: goto label_18c1a0;
        case 0x18c1a4u: goto label_18c1a4;
        case 0x18c1a8u: goto label_18c1a8;
        case 0x18c1acu: goto label_18c1ac;
        case 0x18c1b0u: goto label_18c1b0;
        case 0x18c1b4u: goto label_18c1b4;
        case 0x18c1b8u: goto label_18c1b8;
        case 0x18c1bcu: goto label_18c1bc;
        case 0x18c1c0u: goto label_18c1c0;
        case 0x18c1c4u: goto label_18c1c4;
        case 0x18c1c8u: goto label_18c1c8;
        case 0x18c1ccu: goto label_18c1cc;
        case 0x18c1d0u: goto label_18c1d0;
        case 0x18c1d4u: goto label_18c1d4;
        case 0x18c1d8u: goto label_18c1d8;
        case 0x18c1dcu: goto label_18c1dc;
        case 0x18c1e0u: goto label_18c1e0;
        case 0x18c1e4u: goto label_18c1e4;
        case 0x18c1e8u: goto label_18c1e8;
        case 0x18c1ecu: goto label_18c1ec;
        case 0x18c1f0u: goto label_18c1f0;
        case 0x18c1f4u: goto label_18c1f4;
        case 0x18c1f8u: goto label_18c1f8;
        case 0x18c1fcu: goto label_18c1fc;
        case 0x18c200u: goto label_18c200;
        case 0x18c204u: goto label_18c204;
        case 0x18c208u: goto label_18c208;
        case 0x18c20cu: goto label_18c20c;
        case 0x18c210u: goto label_18c210;
        case 0x18c214u: goto label_18c214;
        case 0x18c218u: goto label_18c218;
        case 0x18c21cu: goto label_18c21c;
        default: break;
    }

    ctx->pc = 0x18c150u;

label_18c150:
    // 0x18c150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18c154:
    // 0x18c154: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18c158:
    // 0x18c158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18c15c:
    // 0x18c15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c160:
    // 0x18c160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18c164:
    // 0x18c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c168:
    // 0x18c168: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_18c16c:
    // 0x18c16c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x18c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_18c170:
    // 0x18c170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c174:
    // 0x18c174: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x18c174u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_18c178:
    // 0x18c178: 0xe60d001c  swc1        $f13, 0x1C($s0)
    ctx->pc = 0x18c178u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_18c17c:
    // 0x18c17c: 0xe60e0018  swc1        $f14, 0x18($s0)
    ctx->pc = 0x18c17cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_18c180:
    // 0x18c180: 0xc06fb58  jal         func_1BED60
label_18c184:
    if (ctx->pc == 0x18C184u) {
        ctx->pc = 0x18C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C180u;
        // 0x18c184: 0xae0600a8  sw          $a2, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C188u;
        goto label_18c188;
    }
    ctx->pc = 0x18C180u;
    SET_GPR_U32(ctx, 31, 0x18C188u);
    ctx->pc = 0x18C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C180u;
    // 0x18c184: 0xae0600a8  sw          $a2, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x18C180u, 0x18C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C188u;
label_18c188:
    // 0x18c188: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x18c188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18c18c:
    // 0x18c18c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18c190:
    // 0x18c190: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x18c190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_18c194:
    // 0x18c194: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x18c194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_18c198:
    // 0x18c198: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x18c198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
label_18c19c:
    // 0x18c19c: 0xc061a1a  jal         func_186868
label_18c1a0:
    if (ctx->pc == 0x18C1A0u) {
        ctx->pc = 0x18C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C19Cu;
        // 0x18c1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1A4u;
        goto label_18c1a4;
    }
    ctx->pc = 0x18C19Cu;
    SET_GPR_U32(ctx, 31, 0x18C1A4u);
    ctx->pc = 0x18C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C19Cu;
    // 0x18c1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18C19Cu, 0x18C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1A4u;
label_18c1a4:
    // 0x18c1a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c1a8:
    // 0x18c1a8: 0xc072596  jal         func_1C9658
label_18c1ac:
    if (ctx->pc == 0x18C1ACu) {
        ctx->pc = 0x18C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1A8u;
        // 0x18c1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1B0u;
        goto label_18c1b0;
    }
    ctx->pc = 0x18C1A8u;
    SET_GPR_U32(ctx, 31, 0x18C1B0u);
    ctx->pc = 0x18C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1A8u;
    // 0x18c1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x18C1A8u, 0x18C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1B0u;
label_18c1b0:
    // 0x18c1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c1b4:
    // 0x18c1b4: 0xc061a16  jal         func_186858
label_18c1b8:
    if (ctx->pc == 0x18C1B8u) {
        ctx->pc = 0x18C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B4u;
        // 0x18c1b8: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1BCu;
        goto label_18c1bc;
    }
    ctx->pc = 0x18C1B4u;
    SET_GPR_U32(ctx, 31, 0x18C1BCu);
    ctx->pc = 0x18C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1B4u;
    // 0x18c1b8: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18C1B4u, 0x18C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1BCu;
label_18c1bc:
    // 0x18c1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c1c0:
    // 0x18c1c0: 0xc06ee66  jal         func_1BB998
label_18c1c4:
    if (ctx->pc == 0x18C1C4u) {
        ctx->pc = 0x18C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1C0u;
        // 0x18c1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1C8u;
        goto label_18c1c8;
    }
    ctx->pc = 0x18C1C0u;
    SET_GPR_U32(ctx, 31, 0x18C1C8u);
    ctx->pc = 0x18C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1C0u;
    // 0x18c1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x18C1C0u, 0x18C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1C8u;
label_18c1c8:
    // 0x18c1c8: 0xc061a16  jal         func_186858
label_18c1cc:
    if (ctx->pc == 0x18C1CCu) {
        ctx->pc = 0x18C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1C8u;
        // 0x18c1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1D0u;
        goto label_18c1d0;
    }
    ctx->pc = 0x18C1C8u;
    SET_GPR_U32(ctx, 31, 0x18C1D0u);
    ctx->pc = 0x18C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1C8u;
    // 0x18c1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18C1C8u, 0x18C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1D0u;
label_18c1d0:
    // 0x18c1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c1d4:
    // 0x18c1d4: 0xc06eebe  jal         func_1BBAF8
label_18c1d8:
    if (ctx->pc == 0x18C1D8u) {
        ctx->pc = 0x18C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1D4u;
        // 0x18c1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1DCu;
        goto label_18c1dc;
    }
    ctx->pc = 0x18C1D4u;
    SET_GPR_U32(ctx, 31, 0x18C1DCu);
    ctx->pc = 0x18C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1D4u;
    // 0x18c1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x18C1D4u, 0x18C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1DCu;
label_18c1dc:
    // 0x18c1dc: 0xc061a16  jal         func_186858
label_18c1e0:
    if (ctx->pc == 0x18C1E0u) {
        ctx->pc = 0x18C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1DCu;
        // 0x18c1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1E4u;
        goto label_18c1e4;
    }
    ctx->pc = 0x18C1DCu;
    SET_GPR_U32(ctx, 31, 0x18C1E4u);
    ctx->pc = 0x18C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1DCu;
    // 0x18c1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18C1DCu, 0x18C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1E4u;
label_18c1e4:
    // 0x18c1e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18c1e8:
    // 0x18c1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1ec:
    // 0x18c1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c1f0:
    // 0x18c1f0: 0xc061a12  jal         func_186848
label_18c1f4:
    if (ctx->pc == 0x18C1F4u) {
        ctx->pc = 0x18C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1F0u;
        // 0x18c1f4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C1F8u;
        goto label_18c1f8;
    }
    ctx->pc = 0x18C1F0u;
    SET_GPR_U32(ctx, 31, 0x18C1F8u);
    ctx->pc = 0x18C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1F0u;
    // 0x18c1f4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C1F0u, 0x18C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1F8u;
label_18c1f8:
    // 0x18c1f8: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x18c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
label_18c1fc:
    // 0x18c1fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18c200:
    // 0x18c200: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18c204:
    // 0x18c204: 0x60f809  jalr        $v1
label_18c208:
    if (ctx->pc == 0x18C208u) {
        ctx->pc = 0x18C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C204u;
        // 0x18c208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C20Cu;
        goto label_18c20c;
    }
    ctx->pc = 0x18C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C20Cu);
        ctx->pc = 0x18C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C204u;
        // 0x18c208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C204u, 0x18C20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C20Cu;
label_18c20c:
    // 0x18c20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c210:
    // 0x18c210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18c210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18c214:
    // 0x18c214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c218:
    // 0x18c218: 0x3e00008  jr          $ra
label_18c21c:
    if (ctx->pc == 0x18C21Cu) {
        ctx->pc = 0x18C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C218u;
        // 0x18c21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C220u;
        goto label_fallthrough_0x18c218;
    }
    ctx->pc = 0x18C218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C218u;
        // 0x18c21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c218:
    ctx->pc = 0x18C220u;
}
