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

// Function: sub_001930E0
// Address: 0x1930e0 - 0x193238
void sub_001930E0_0x1930e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001930E0_0x1930e0");
#endif

    switch (ctx->pc) {
        case 0x19310cu: goto label_19310c;
        case 0x193114u: goto label_193114;
        case 0x19311cu: goto label_19311c;
        case 0x19312cu: goto label_19312c;
        case 0x19314cu: goto label_19314c;
        case 0x193174u: goto label_193174;
        case 0x1931e4u: goto label_1931e4;
        case 0x193210u: goto label_193210;
        default: break;
    }

    ctx->pc = 0x1930e0u;

    // 0x1930e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1930e4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1930e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1930e8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1930e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1930ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1930ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1930f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930f4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1930f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1930f8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1930f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1930fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193100: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x193100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x193104: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x193104u;
    SET_GPR_U32(ctx, 31, 0x19310Cu);
    ctx->pc = 0x193108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193104u;
    // 0x193108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x193104u, 0x19310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19310Cu;
label_19310c:
    // 0x19310c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19310Cu;
    SET_GPR_U32(ctx, 31, 0x193114u);
    ctx->pc = 0x193110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19310Cu;
    // 0x193110: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19310Cu, 0x193114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193114u;
label_193114:
    // 0x193114: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x193114u;
    SET_GPR_U32(ctx, 31, 0x19311Cu);
    ctx->pc = 0x193118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193114u;
    // 0x193118: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x193114u, 0x19311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19311Cu;
label_19311c:
    // 0x19311c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x19311cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193120: 0x8e251004  lw          $a1, 0x1004($s1)
    ctx->pc = 0x193120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x193124: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x193124u;
    SET_GPR_U32(ctx, 31, 0x19312Cu);
    ctx->pc = 0x193128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193124u;
    // 0x193128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x193124u, 0x19312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19312Cu;
label_19312c:
    // 0x19312c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193130: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x193134: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x193138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x193138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19313c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19313cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193140: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x193140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193144: 0xc070b88  jal         func_1C2E20
    ctx->pc = 0x193144u;
    SET_GPR_U32(ctx, 31, 0x19314Cu);
    ctx->pc = 0x193148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193144u;
    // 0x193148: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x193144u, 0x19314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19314Cu;
label_19314c:
    // 0x19314c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19314Cu;
    {
        const bool branch_taken_0x19314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19314Cu;
        // 0x193150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19314c) {
            ctx->pc = 0x19316Cu;
            goto label_19316c;
        }
    }
    ctx->pc = 0x193154u;
    // 0x193154: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x193158: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x19315c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x19315cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x193160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x193160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193164: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x193164u;
    {
        const bool branch_taken_0x193164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193164u;
        // 0x193168: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193164) {
            ctx->pc = 0x1931D8u;
            goto label_1931d8;
        }
    }
    ctx->pc = 0x19316Cu;
label_19316c:
    // 0x19316c: 0xc064e16  jal         func_193858
    ctx->pc = 0x19316Cu;
    SET_GPR_U32(ctx, 31, 0x193174u);
    ctx->pc = 0x193170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19316Cu;
    // 0x193170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193858u, 0x19316Cu, 0x193174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193174u;
label_193174:
    // 0x193174: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x193178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x193178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19317c: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x19317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x193180: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x193184: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x193184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x193188: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x193188u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x19318c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x19318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193190: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x193190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x193194: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x193194u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x193198: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x193198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19319c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x19319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1931a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1931a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1931a4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1931a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1931a8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1931a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1931ac: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1931acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1931b0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1931b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1931b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1931b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1931b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1931B8u;
    {
        const bool branch_taken_0x1931b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931B8u;
        // 0x1931bc: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931b8) {
            ctx->pc = 0x1931ECu;
            goto label_1931ec;
        }
    }
    ctx->pc = 0x1931C0u;
    // 0x1931c0: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x1931c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1931c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1931c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931c8: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1931c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1931cc: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1931ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1931d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1931d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1931d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1931d8:
    // 0x1931d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1931d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931dc: 0xc070946  jal         func_1C2518
    ctx->pc = 0x1931DCu;
    SET_GPR_U32(ctx, 31, 0x1931E4u);
    ctx->pc = 0x1931E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931DCu;
    // 0x1931e0: 0x248601e0  addiu       $a2, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2518u, 0x1931DCu, 0x1931E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931E4u;
label_1931e4:
    // 0x1931e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1931E4u;
    {
        const bool branch_taken_0x1931e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1931E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931E4u;
        // 0x1931e8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931e4) {
            ctx->pc = 0x193214u;
            goto label_193214;
        }
    }
    ctx->pc = 0x1931ECu;
label_1931ec:
    // 0x1931ec: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x1931ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1931f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1931f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931f4: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1931f8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1931f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1931fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1931fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193200: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x193204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193208: 0xc070946  jal         func_1C2518
    ctx->pc = 0x193208u;
    SET_GPR_U32(ctx, 31, 0x193210u);
    ctx->pc = 0x19320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193208u;
    // 0x19320c: 0x248601e0  addiu       $a2, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2518u, 0x193208u, 0x193210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193210u;
label_193210:
    // 0x193210: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x193210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_193214:
    // 0x193214: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x193214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x193218: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x193218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x19321c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x19321cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193220: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x193220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x193224: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x193224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193228: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x193228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19322c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193230: 0x3e00008  jr          $ra
    ctx->pc = 0x193230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193230u;
        // 0x193234: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193238u;
}
