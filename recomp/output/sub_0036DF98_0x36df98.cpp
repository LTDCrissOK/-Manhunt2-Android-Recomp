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

// Function: sub_0036DF98
// Address: 0x36df98 - 0x36e0f0
void sub_0036DF98_0x36df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DF98_0x36df98");
#endif

    switch (ctx->pc) {
        case 0x36dfc0u: goto label_36dfc0;
        case 0x36e058u: goto label_36e058;
        case 0x36e098u: goto label_36e098;
        case 0x36e0a4u: goto label_36e0a4;
        case 0x36e0acu: goto label_36e0ac;
        case 0x36e0b4u: goto label_36e0b4;
        case 0x36e0bcu: goto label_36e0bc;
        case 0x36e0ccu: goto label_36e0cc;
        default: break;
    }

    ctx->pc = 0x36df98u;

    // 0x36df98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36df9c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x36df9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x36dfa0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x36dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x36dfa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36dfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfa8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x36dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x36dfac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36dfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfb0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x36dfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x36dfb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36dfb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfb8: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x36DFB8u;
    SET_GPR_U32(ctx, 31, 0x36DFC0u);
    ctx->pc = 0x36DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DFB8u;
    // 0x36dfbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x36DFB8u, 0x36DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DFC0u;
label_36dfc0:
    // 0x36dfc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36dfc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36dfc8: 0xac70cbf8  sw          $s0, -0x3408($v1)
    ctx->pc = 0x36dfc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FCBF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCBF8u, _value); } while (0);
    // 0x36dfcc: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x36DFCCu;
    {
        const bool branch_taken_0x36dfcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFCCu;
        // 0x36dfd0: 0xac51cbfc  sw          $s1, -0x3404($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953980), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dfcc) {
            ctx->pc = 0x36E050u;
            goto label_36e050;
        }
    }
    ctx->pc = 0x36DFD4u;
    // 0x36dfd4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x36dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dfd8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x36dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dfdc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x36dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dfe0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x36dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36dfe4: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x36dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36dfe8: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x36dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36dfec: 0xc6460020  lwc1        $f6, 0x20($s2)
    ctx->pc = 0x36dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36dff0: 0xc6470024  lwc1        $f7, 0x24($s2)
    ctx->pc = 0x36dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36dff4: 0xc6480028  lwc1        $f8, 0x28($s2)
    ctx->pc = 0x36dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x36dff8: 0xc6490030  lwc1        $f9, 0x30($s2)
    ctx->pc = 0x36dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36dffc: 0xc64a0034  lwc1        $f10, 0x34($s2)
    ctx->pc = 0x36dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x36e000: 0xc64b0038  lwc1        $f11, 0x38($s2)
    ctx->pc = 0x36e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x36e004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36e004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36e008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36e008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e00c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36e00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e010: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36e010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e014: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x36e014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e018: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x36e018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e01c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x36e01cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e020: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x36e020u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e024: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x36e024u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36e028: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x36e028u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36e02c: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x36e02cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36e030: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x36e030u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36e034: 0xe7aa0034  swc1        $f10, 0x34($sp)
    ctx->pc = 0x36e034u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36e038: 0xe7ab0038  swc1        $f11, 0x38($sp)
    ctx->pc = 0x36e038u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36e03c: 0xe7ac003c  swc1        $f12, 0x3C($sp)
    ctx->pc = 0x36e03cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36e040: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36e040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36e044: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x36e044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x36e048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36E048u;
    {
        const bool branch_taken_0x36e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E048u;
        // 0x36e04c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e048) {
            ctx->pc = 0x36E058u;
            goto label_36e058;
        }
    }
    ctx->pc = 0x36E050u;
label_36e050:
    // 0x36e050: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x36E050u;
    SET_GPR_U32(ctx, 31, 0x36E058u);
    ctx->pc = 0x36E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E050u;
    // 0x36e054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x36E050u, 0x36E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E058u;
label_36e058:
    // 0x36e058: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x36e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x36e05c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x36e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e060: 0xc4437d90  lwc1        $f3, 0x7D90($v0)
    ctx->pc = 0x36e060u;
    { uint32_t bits = FAST_READ32(0x5A7D90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e064: 0x24437d90  addiu       $v1, $v0, 0x7D90
    ctx->pc = 0x36e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x36e068: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x36e068u;
    { uint32_t bits = FAST_READ32(0x5A7D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36e06c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e070: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36e070u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36e074: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x36e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e078: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x36e078u;
    { uint32_t bits = FAST_READ32(0x5A7D94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e07c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e080: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e084: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x36e084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36e088: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x36e088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x36e08c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x36e08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36e090: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x36E090u;
    SET_GPR_U32(ctx, 31, 0x36E098u);
    ctx->pc = 0x36E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E090u;
    // 0x36e094: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x36E090u, 0x36E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E098u;
label_36e098:
    // 0x36e098: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36e09c: 0xc0dd17e  jal         func_3745F8
    ctx->pc = 0x36E09Cu;
    SET_GPR_U32(ctx, 31, 0x36E0A4u);
    ctx->pc = 0x36E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E09Cu;
    // 0x36e0a0: 0x8c44cc04  lw          $a0, -0x33FC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3745F8u, 0x36E09Cu, 0x36E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0A4u;
label_36e0a4:
    // 0x36e0a4: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x36E0A4u;
    SET_GPR_U32(ctx, 31, 0x36E0ACu);
    ctx->pc = 0x36E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0A4u;
    // 0x36e0a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x36E0A4u, 0x36E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0ACu;
label_36e0ac:
    // 0x36e0ac: 0xc0dd198  jal         func_374660
    ctx->pc = 0x36E0ACu;
    SET_GPR_U32(ctx, 31, 0x36E0B4u);
    ctx->pc = 0x36E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0ACu;
    // 0x36e0b0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374660u, 0x36E0ACu, 0x36E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0B4u;
label_36e0b4:
    // 0x36e0b4: 0xc0dd1a2  jal         func_374688
    ctx->pc = 0x36E0B4u;
    SET_GPR_U32(ctx, 31, 0x36E0BCu);
    ctx->pc = 0x36E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0B4u;
    // 0x36e0b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374688u, 0x36E0B4u, 0x36E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0BCu;
label_36e0bc:
    // 0x36e0bc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36e0c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e0c4: 0xc0db7b0  jal         func_36DEC0
    ctx->pc = 0x36E0C4u;
    SET_GPR_U32(ctx, 31, 0x36E0CCu);
    ctx->pc = 0x36E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0C4u;
    // 0x36e0c8: 0x2484f018  addiu       $a0, $a0, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DEC0u, 0x36E0C4u, 0x36E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0CCu;
label_36e0cc:
    // 0x36e0cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x36e0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e0d4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x36e0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36e0d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x36e0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e0dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x36e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0E0u;
        // 0x36e0e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0E8u;
    // 0x36e0e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36e0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36e0ec: 0x0  nop
    ctx->pc = 0x36e0ecu;
    // NOP
    ctx->pc = 0x36e0f0u;
}
