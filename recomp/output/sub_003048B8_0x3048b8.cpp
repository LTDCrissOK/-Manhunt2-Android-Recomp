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

// Function: sub_003048B8
// Address: 0x3048b8 - 0x304990
void sub_003048B8_0x3048b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003048B8_0x3048b8");
#endif

    switch (ctx->pc) {
        case 0x3048e0u: goto label_3048e0;
        case 0x30497cu: goto label_30497c;
        default: break;
    }

    ctx->pc = 0x3048b8u;

    // 0x3048b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3048bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3048bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3048c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3048c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3048c4: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3048C4u;
    {
        const bool branch_taken_0x3048c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3048C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048C4u;
        // 0x3048c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048c4) {
            ctx->pc = 0x30497Cu;
            goto label_30497c;
        }
    }
    ctx->pc = 0x3048CCu;
    // 0x3048cc: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3048CCu;
    {
        const bool branch_taken_0x3048cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048CCu;
        // 0x3048d0: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048cc) {
            ctx->pc = 0x30497Cu;
            goto label_30497c;
        }
    }
    ctx->pc = 0x3048D4u;
    // 0x3048d4: 0x26105870  addiu       $s0, $s0, 0x5870
    ctx->pc = 0x3048d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22640));
    // 0x3048d8: 0xc0b8a9e  jal         func_2E2A78
    ctx->pc = 0x3048D8u;
    SET_GPR_U32(ctx, 31, 0x3048E0u);
    ctx->pc = 0x3048DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048D8u;
    // 0x3048dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2A78u, 0x3048D8u, 0x3048E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048E0u;
label_3048e0:
    // 0x3048e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3048e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3048e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048e8: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x3048e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x3048ec: 0x3c01bf99  lui         $at, 0xBF99
    ctx->pc = 0x3048ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49049 << 16));
    // 0x3048f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3048f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3048f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3048f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3048f8: 0x3c09005a  lui         $t1, 0x5A
    ctx->pc = 0x3048f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)90 << 16));
    // 0x3048fc: 0xc6060078  lwc1        $f6, 0x78($s0)
    ctx->pc = 0x3048fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x304900: 0x3c0a005a  lui         $t2, 0x5A
    ctx->pc = 0x304900u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)90 << 16));
    // 0x304904: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x304904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x304908: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x304908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30490c: 0x25456540  addiu       $a1, $t2, 0x6540
    ctx->pc = 0x30490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 25920));
    // 0x304910: 0xe5006520  swc1        $f0, 0x6520($t0)
    ctx->pc = 0x304910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6520u, _value); } while (0); }
    // 0x304914: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x304914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x304918: 0xe5226530  swc1        $f2, 0x6530($t1)
    ctx->pc = 0x304918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6530u, _value); } while (0); }
    // 0x30491c: 0x24e66548  addiu       $a2, $a3, 0x6548
    ctx->pc = 0x30491cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 25928));
    // 0x304920: 0x3c01bf8c  lui         $at, 0xBF8C
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49036 << 16));
    // 0x304924: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x304924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x304928: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x304928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30492c: 0x25036520  addiu       $v1, $t0, 0x6520
    ctx->pc = 0x30492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 25888));
    // 0x304930: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x304930u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6544u, _value); } while (0); }
    // 0x304934: 0x25226530  addiu       $v0, $t1, 0x6530
    ctx->pc = 0x304934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 25904));
    // 0x304938: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x304938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x30493c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30493cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304940: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304944: 0xe4e36548  swc1        $f3, 0x6548($a3)
    ctx->pc = 0x304944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6548u, _value); } while (0); }
    // 0x304948: 0x24846550  addiu       $a0, $a0, 0x6550
    ctx->pc = 0x304948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25936));
    // 0x30494c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x30494cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A654Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A654Cu, _value); } while (0); }
    // 0x304950: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x304950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x304954: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x304954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x304958: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x304958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30495c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x30495cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A652Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A652Cu, _value); } while (0);
    // 0x304960: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x304960u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6534u, _value); } while (0); }
    // 0x304964: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x304964u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6538u, _value); } while (0); }
    // 0x304968: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x304968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A653Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A653Cu, _value); } while (0);
    // 0x30496c: 0xe5446540  swc1        $f4, 0x6540($t2)
    ctx->pc = 0x30496cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6540u, _value); } while (0); }
    // 0x304970: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x304970u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A6524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6524u, _value); } while (0); }
    // 0x304974: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x304974u;
    SET_GPR_U32(ctx, 31, 0x30497Cu);
    ctx->pc = 0x304978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304974u;
    // 0x304978: 0xe4650008  swc1        $f5, 0x8($v1) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x304974u, 0x30497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30497Cu;
label_30497c:
    // 0x30497c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30497cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304984: 0x3e00008  jr          $ra
    ctx->pc = 0x304984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304984u;
        // 0x304988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30498Cu;
    // 0x30498c: 0x0  nop
    ctx->pc = 0x30498cu;
    // NOP
    ctx->pc = 0x304990u;
}
