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

// Function: sub_002E7900
// Address: 0x2e7900 - 0x2e7ab0
void sub_002E7900_0x2e7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7900_0x2e7900");
#endif

    switch (ctx->pc) {
        case 0x2e7950u: goto label_2e7950;
        case 0x2e79acu: goto label_2e79ac;
        case 0x2e79e0u: goto label_2e79e0;
        case 0x2e7a3cu: goto label_2e7a3c;
        case 0x2e7a80u: goto label_2e7a80;
        default: break;
    }

    ctx->pc = 0x2e7900u;

    // 0x2e7900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7904: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2e7904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2e7908: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e7908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e790c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e7910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7914: 0x90434648  lbu         $v1, 0x4648($v0)
    ctx->pc = 0x2e7914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4A4648u));
    // 0x2e7918: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2e7918u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2e791c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E791Cu;
    {
        const bool branch_taken_0x2e791c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E791Cu;
        // 0x2e7920: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e791c) {
            ctx->pc = 0x2E79B4u;
            goto label_2e79b4;
        }
    }
    ctx->pc = 0x2E7924u;
    // 0x2e7924: 0xc60112b8  lwc1        $f1, 0x12B8($s0)
    ctx->pc = 0x2e7924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e792c: 0x0  nop
    ctx->pc = 0x2e792cu;
    // NOP
    // 0x2e7930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7934: 0x0  nop
    ctx->pc = 0x2e7934u;
    // NOP
    // 0x2e7938: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x2E7938u;
    {
        const bool branch_taken_0x2e7938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7938u;
        // 0x2e793c: 0x9222b820  lbu         $v0, -0x47E0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294948896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7938) {
            ctx->pc = 0x2E79B4u;
            goto label_2e79b4;
        }
    }
    ctx->pc = 0x2E7940u;
    // 0x2e7940: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7940u;
    {
        const bool branch_taken_0x2e7940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7940) {
            ctx->pc = 0x2E7944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7940u;
            // 0x2e7944: 0x8e02144c  lw          $v0, 0x144C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E79B8u;
            goto label_2e79b8;
        }
    }
    ctx->pc = 0x2E7948u;
    // 0x2e7948: 0xc0be5e2  jal         func_2F9788
    ctx->pc = 0x2E7948u;
    SET_GPR_U32(ctx, 31, 0x2E7950u);
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2E7948u, 0x2E7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7950u;
label_2e7950:
    // 0x2e7950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7954: 0x8e02144c  lw          $v0, 0x144C($s0)
    ctx->pc = 0x2e7954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5196)));
    // 0x2e7958: 0x50460024  beql        $v0, $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E7958u;
    {
        const bool branch_taken_0x2e7958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2e7958) {
            ctx->pc = 0x2E795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7958u;
            // 0x2e795c: 0xae001450  sw          $zero, 0x1450($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E79ECu;
            goto label_2e79ec;
        }
    }
    ctx->pc = 0x2E7960u;
    // 0x2e7960: 0xae06144c  sw          $a2, 0x144C($s0)
    ctx->pc = 0x2e7960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5196), GPR_U32(ctx, 6));
    // 0x2e7964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7968: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e796c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E796Cu;
    {
        const bool branch_taken_0x2e796c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E796Cu;
        // 0x2e7970: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e796c) {
            ctx->pc = 0x2E797Cu;
            goto label_2e797c;
        }
    }
    ctx->pc = 0x2E7974u;
    // 0x2e7974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7974u;
    {
        const bool branch_taken_0x2e7974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7974u;
        // 0x2e7978: 0xc46c1588  lwc1        $f12, 0x1588($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7974) {
            ctx->pc = 0x2E7998u;
            goto label_2e7998;
        }
    }
    ctx->pc = 0x2E797Cu;
label_2e797c:
    // 0x2e797c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E797Cu;
    {
        const bool branch_taken_0x2e797c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E797Cu;
        // 0x2e7980: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e797c) {
            ctx->pc = 0x2E7998u;
            goto label_2e7998;
        }
    }
    ctx->pc = 0x2E7984u;
    // 0x2e7984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7984u;
    {
        const bool branch_taken_0x2e7984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7984u;
        // 0x2e7988: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7984) {
            ctx->pc = 0x2E799Cu;
            goto label_2e799c;
        }
    }
    ctx->pc = 0x2E798Cu;
    // 0x2e798c: 0xc4611588  lwc1        $f1, 0x1588($v1)
    ctx->pc = 0x2e798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7990: 0xc460158c  lwc1        $f0, 0x158C($v1)
    ctx->pc = 0x2e7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7994: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2e7994u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e7998:
    // 0x2e7998: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2e7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2e799c:
    // 0x2e799c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e79a0: 0x8c45cd60  lw          $a1, -0x32A0($v0)
    ctx->pc = 0x2e79a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954336)));
    // 0x2e79a4: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2E79A4u;
    SET_GPR_U32(ctx, 31, 0x2E79ACu);
    ctx->pc = 0x2E79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E79A4u;
    // 0x2e79a8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2E79A4u, 0x2E79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79ACu;
label_2e79ac:
    // 0x2e79ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E79ACu;
    {
        const bool branch_taken_0x2e79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79ACu;
        // 0x2e79b0: 0xae001450  sw          $zero, 0x1450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79ac) {
            ctx->pc = 0x2E79ECu;
            goto label_2e79ec;
        }
    }
    ctx->pc = 0x2E79B4u;
label_2e79b4:
    // 0x2e79b4: 0x8e02144c  lw          $v0, 0x144C($s0)
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5196)));
label_2e79b8:
    // 0x2e79b8: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E79B8u;
    {
        const bool branch_taken_0x2e79b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79B8u;
        // 0x2e79bc: 0x9222b820  lbu         $v0, -0x47E0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294948896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79b8) {
            ctx->pc = 0x2E79F8u;
            goto label_2e79f8;
        }
    }
    ctx->pc = 0x2E79C0u;
    // 0x2e79c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E79C0u;
    {
        const bool branch_taken_0x2e79c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79C0u;
        // 0x2e79c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79c0) {
            ctx->pc = 0x2E79E4u;
            goto label_2e79e4;
        }
    }
    ctx->pc = 0x2E79C8u;
    // 0x2e79c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e79c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e79cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e79ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e79d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e79d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e79d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79d8: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2E79D8u;
    SET_GPR_U32(ctx, 31, 0x2E79E0u);
    ctx->pc = 0x2E79DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E79D8u;
    // 0x2e79dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2E79D8u, 0x2E79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79E0u;
label_2e79e0:
    // 0x2e79e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e79e4:
    // 0x2e79e4: 0xae001450  sw          $zero, 0x1450($s0)
    ctx->pc = 0x2e79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5200), GPR_U32(ctx, 0));
    // 0x2e79e8: 0xae02144c  sw          $v0, 0x144C($s0)
    ctx->pc = 0x2e79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5196), GPR_U32(ctx, 2));
label_2e79ec:
    // 0x2e79ec: 0x8e02144c  lw          $v0, 0x144C($s0)
    ctx->pc = 0x2e79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5196)));
    // 0x2e79f0: 0x443002a  bgezl       $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E79F0u;
    {
        const bool branch_taken_0x2e79f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2e79f0) {
            ctx->pc = 0x2E79F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79F0u;
            // 0x2e79f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E79F8u;
label_2e79f8:
    // 0x2e79f8: 0x9222b820  lbu         $v0, -0x47E0($s1)
    ctx->pc = 0x2e79f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294948896)));
    // 0x2e79fc: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E79FCu;
    {
        const bool branch_taken_0x2e79fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e79fc) {
            ctx->pc = 0x2E7A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79FCu;
            // 0x2e7a00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E7A04u;
    // 0x2e7a04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e7a08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7a0c: 0x8c43cb70  lw          $v1, -0x3490($v0)
    ctx->pc = 0x2e7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCB70u));
    // 0x2e7a10: 0x54640022  bnel        $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E7A10u;
    {
        const bool branch_taken_0x2e7a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e7a10) {
            ctx->pc = 0x2E7A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A10u;
            // 0x2e7a14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E7A18u;
    // 0x2e7a18: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e7a1c: 0x90435e90  lbu         $v1, 0x5E90($v0)
    ctx->pc = 0x2e7a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x595E90u));
    // 0x2e7a20: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E7A20u;
    {
        const bool branch_taken_0x2e7a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a20) {
            ctx->pc = 0x2E7A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A20u;
            // 0x2e7a24: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E7A28u;
    // 0x2e7a28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e7a2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a30: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e7a34: 0xc0d9cfa  jal         func_3673E8
    ctx->pc = 0x2E7A34u;
    SET_GPR_U32(ctx, 31, 0x2E7A3Cu);
    ctx->pc = 0x2E7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A34u;
    // 0x2e7a38: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3673E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3673E8u, 0x2E7A34u, 0x2E7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A3Cu;
label_2e7a3c:
    // 0x2e7a3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7a40: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7A40u;
    {
        const bool branch_taken_0x2e7a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a40) {
            ctx->pc = 0x2E7A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A40u;
            // 0x2e7a44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E7A48u;
    // 0x2e7a48: 0xc6011450  lwc1        $f1, 0x1450($s0)
    ctx->pc = 0x2e7a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7a4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e7a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e7a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e7a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a58: 0x0  nop
    ctx->pc = 0x2e7a58u;
    // NOP
    // 0x2e7a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7a60: 0x0  nop
    ctx->pc = 0x2e7a60u;
    // NOP
    // 0x2e7a64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7A64u;
    {
        const bool branch_taken_0x2e7a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A64u;
        // 0x2e7a68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a64) {
            ctx->pc = 0x2E7A88u;
            goto label_2e7a88;
        }
    }
    ctx->pc = 0x2E7A6Cu;
    // 0x2e7a6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7a70: 0xc44cca18  lwc1        $f12, -0x35E8($v0)
    ctx->pc = 0x2e7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a78: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2E7A78u;
    SET_GPR_U32(ctx, 31, 0x2E7A80u);
    ctx->pc = 0x2E7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A78u;
    // 0x2e7a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2E7A78u, 0x2E7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A80u;
label_2e7a80:
    // 0x2e7a80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7A80u;
    {
        const bool branch_taken_0x2e7a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A80u;
        // 0x2e7a84: 0xae001450  sw          $zero, 0x1450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a80) {
            ctx->pc = 0x2E7A98u;
            goto label_2e7a98;
        }
    }
    ctx->pc = 0x2E7A88u;
label_2e7a88:
    // 0x2e7a88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7a8c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e7a8cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7a90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7a94: 0xe6001450  swc1        $f0, 0x1450($s0)
    ctx->pc = 0x2e7a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5200), bits); }
label_2e7a98:
    // 0x2e7a98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e7a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7a9c:
    // 0x2e7a9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e7a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e7aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AA4u;
        // 0x2e7aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7AACu;
    // 0x2e7aac: 0x0  nop
    ctx->pc = 0x2e7aacu;
    // NOP
    ctx->pc = 0x2e7ab0u;
}
