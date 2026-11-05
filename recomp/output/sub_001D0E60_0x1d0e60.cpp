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

// Function: sub_001D0E60
// Address: 0x1d0e60 - 0x1d1538
void sub_001D0E60_0x1d0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E60_0x1d0e60");
#endif

    switch (ctx->pc) {
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0edcu: goto label_1d0edc;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0f38u: goto label_1d0f38;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d1020u: goto label_1d1020;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1094u: goto label_1d1094;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d130cu: goto label_1d130c;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d14fcu: goto label_1d14fc;
        default: break;
    }

    ctx->pc = 0x1d0e60u;

    // 0x1d0e60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d0e64: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0e68: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1d0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x1d0e6c: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1d0e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x1d0e70: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1d0e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x1d0e74: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d0e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0e78: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x1d0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x1d0e7c: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1d0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x1d0e80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d0e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e84: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x1d0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x1d0e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e8c: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x1d0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x1d0e90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e94: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x1d0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x1d0e98: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d0e98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e9c: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x1d0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x1d0ea0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d0ea0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea4: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1d0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x1d0ea8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d0ea8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0eac: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x1d0eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x1d0eb0: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1d0eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1d0eb4: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1d0eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1d0eb8: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1d0eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1d0ebc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d0ec0: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x1d0ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x1d0ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0ec8: 0x80420020  lb          $v0, 0x20($v0)
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d0ecc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D0ECCu;
    SET_GPR_U32(ctx, 31, 0x1D0ED4u);
    ctx->pc = 0x1D0ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ECCu;
    // 0x1d0ed0: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D0ECCu, 0x1D0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED4u;
label_1d0ed4:
    // 0x1d0ed4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D0ED4u;
    SET_GPR_U32(ctx, 31, 0x1D0EDCu);
    ctx->pc = 0x1D0ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED4u;
    // 0x1d0ed8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D0ED4u, 0x1D0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EDCu;
label_1d0edc:
    // 0x1d0edc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D0EDCu;
    SET_GPR_U32(ctx, 31, 0x1D0EE4u);
    ctx->pc = 0x1D0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EDCu;
    // 0x1d0ee0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D0EDCu, 0x1D0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EE4u;
label_1d0ee4:
    // 0x1d0ee4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D0EE4u;
    SET_GPR_U32(ctx, 31, 0x1D0EECu);
    ctx->pc = 0x1D0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EE4u;
    // 0x1d0ee8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D0EE4u, 0x1D0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EECu;
label_1d0eec:
    // 0x1d0eec: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1d0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0ef0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d0ef4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1d0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1d0ef8: 0x24835b00  addiu       $v1, $a0, 0x5B00
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x1d0efc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0f00: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d0f04: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x1d0f04u;
    { uint32_t bits = FAST_READ32(0x575B0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0f08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1d0f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0f0c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d0f0cu;
    { uint32_t bits = FAST_READ32(0x575B04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0f10: 0xa2a818  mult        $s5, $a1, $v0
    ctx->pc = 0x1d0f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1d0f14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d0f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0f18: 0xc4825b00  lwc1        $f2, 0x5B00($a0)
    ctx->pc = 0x1d0f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 23296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0f1c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1d0f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1d0f20: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1d0f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d0f24: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1d0f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1d0f28: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1d0f28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1d0f2c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1d0f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0f30: 0x9643002a  lhu         $v1, 0x2A($s2)
    ctx->pc = 0x1d0f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1d0f34: 0x0  nop
    ctx->pc = 0x1d0f34u;
    // NOP
label_1d0f38:
    // 0x1d0f38: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1d0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1d0f3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F3Cu;
    {
        const bool branch_taken_0x1d0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f3c) {
            ctx->pc = 0x1D0F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0F3Cu;
            // 0x1d0f40: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0F54u;
            goto label_1d0f54;
        }
    }
    ctx->pc = 0x1D0F44u;
    // 0x1d0f44: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1d0f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1d0f48: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D0F48u;
    {
        const bool branch_taken_0x1d0f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f48) {
            ctx->pc = 0x1D0F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0F48u;
            // 0x1d0f4c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0FACu;
            goto label_1d0fac;
        }
    }
    ctx->pc = 0x1D0F50u;
    // 0x1d0f50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d0f54:
    // 0x1d0f54: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1d0f58: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1d0f5c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0F5Cu;
    {
        const bool branch_taken_0x1d0f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f5c) {
            ctx->pc = 0x1D0F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0F5Cu;
            // 0x1d0f60: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0FACu;
            goto label_1d0fac;
        }
    }
    ctx->pc = 0x1D0F64u;
    // 0x1d0f64: 0x92220090  lbu         $v0, 0x90($s1)
    ctx->pc = 0x1d0f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1d0f68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d0f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d0f6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0F6Cu;
    {
        const bool branch_taken_0x1d0f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F6Cu;
        // 0x1d0f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f6c) {
            ctx->pc = 0x1D0FA8u;
            goto label_1d0fa8;
        }
    }
    ctx->pc = 0x1D0F74u;
    // 0x1d0f74: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x1d0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f7c: 0xc074ca8  jal         func_1D32A0
    ctx->pc = 0x1D0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F84u);
    ctx->pc = 0x1D0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F7Cu;
    // 0x1d0f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32A0u, 0x1D0F7Cu, 0x1D0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F84u;
label_1d0f84:
    // 0x1d0f84: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d0f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0f88: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1d0f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0f8c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d0f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0f90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d0f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0f94: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x1d0f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1d0f98: 0x30430100  andi        $v1, $v0, 0x100
    ctx->pc = 0x1d0f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d0f9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d0f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d0fa0: 0x283b80b  movn        $s7, $s4, $v1
    ctx->pc = 0x1d0fa0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 20));
    // 0x1d0fa4: 0x282f00b  movn        $fp, $s4, $v0
    ctx->pc = 0x1d0fa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
label_1d0fa8:
    // 0x1d0fa8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1d0fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d0fac:
    // 0x1d0fac: 0x5640ffe2  bnel        $s2, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D0FACu;
    {
        const bool branch_taken_0x1d0fac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0fac) {
            ctx->pc = 0x1D0FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0FACu;
            // 0x1d0fb0: 0x9643002a  lhu         $v1, 0x2A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f38;
        }
    }
    ctx->pc = 0x1D0FB4u;
    // 0x1d0fb4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0fb8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0fbc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1d0fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d0fc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d0fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d0fc4: 0x3c01322b  lui         $at, 0x322B
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12843 << 16));
    // 0x1d0fc8: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x1d0fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x1d0fcc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1d0fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1d0fd0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1d0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1d0fd4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d0fd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d0fd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d0fdc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1d0fdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1d0fe0: 0xac408e88  sw          $zero, -0x7178($v0)
    ctx->pc = 0x1d0fe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8E88u, _value); } while (0);
    // 0x1d0fe4: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x1D0FE4u;
    SET_GPR_U32(ctx, 31, 0x1D0FECu);
    ctx->pc = 0x1D0FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FE4u;
    // 0x1d0fe8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x1D0FE4u, 0x1D0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FECu;
label_1d0fec:
    // 0x1d0fec: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0ff0: 0x1240009b  beqz        $s2, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D0FF0u;
    {
        const bool branch_taken_0x1d0ff0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FF0u;
        // 0x1d0ff4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ff0) {
            ctx->pc = 0x1D1260u;
            goto label_1d1260;
        }
    }
    ctx->pc = 0x1D0FF8u;
    // 0x1d0ff8: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d0ffc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1000: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1d1000u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x1d1004: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d1004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d1008: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1d1008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1d100c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d1010: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1d1010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1d1014: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1d1014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1d1018: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d101c: 0x0  nop
    ctx->pc = 0x1d101cu;
    // NOP
label_1d1020:
    // 0x1d1020: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d1024: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1d1024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1028: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1d1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1d102c: 0x5060008a  beql        $v1, $zero, . + 4 + (0x8A << 2)
    ctx->pc = 0x1D102Cu;
    {
        const bool branch_taken_0x1d102c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d102c) {
            ctx->pc = 0x1D1030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D102Cu;
            // 0x1d1030: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1258u;
            goto label_1d1258;
        }
    }
    ctx->pc = 0x1D1034u;
    // 0x1d1034: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1d1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1038: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x1d1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d103c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1d103cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1d1040: 0xc6540014  lwc1        $f20, 0x14($s2)
    ctx->pc = 0x1d1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1044: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x1d1044u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1d1048: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d104c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x1d104cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1050: 0x0  nop
    ctx->pc = 0x1d1050u;
    // NOP
    // 0x1d1054: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1054u;
    {
        const bool branch_taken_0x1d1054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1054u;
        // 0x1d1058: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1054) {
            ctx->pc = 0x1D106Cu;
            goto label_1d106c;
        }
    }
    ctx->pc = 0x1D105Cu;
    // 0x1d105c: 0xc074b5e  jal         func_1D2D78
    ctx->pc = 0x1D105Cu;
    SET_GPR_U32(ctx, 31, 0x1D1064u);
    ctx->pc = 0x1D1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D105Cu;
    // 0x1d1060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D78u, 0x1D105Cu, 0x1D1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1064u;
label_1d1064:
    // 0x1d1064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1064u;
    {
        const bool branch_taken_0x1d1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1064u;
        // 0x1d1068: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1064) {
            ctx->pc = 0x1D1074u;
            goto label_1d1074;
        }
    }
    ctx->pc = 0x1D106Cu;
label_1d106c:
    // 0x1d106c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d106cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1070: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1d1070u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d1074:
    // 0x1d1074: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
    // 0x1d1078: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1078u;
    {
        const bool branch_taken_0x1d1078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1078u;
        // 0x1d107c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1078) {
            ctx->pc = 0x1D109Cu;
            goto label_1d109c;
        }
    }
    ctx->pc = 0x1D1080u;
    // 0x1d1080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1084: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d108c: 0xc074ca8  jal         func_1D32A0
    ctx->pc = 0x1D108Cu;
    SET_GPR_U32(ctx, 31, 0x1D1094u);
    ctx->pc = 0x1D1090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D108Cu;
    // 0x1d1090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32A0u, 0x1D108Cu, 0x1D1094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1094u;
label_1d1094:
    // 0x1d1094: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1D1094u;
    {
        const bool branch_taken_0x1d1094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1094u;
        // 0x1d1098: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1094) {
            ctx->pc = 0x1D11DCu;
            goto label_1d11dc;
        }
    }
    ctx->pc = 0x1D109Cu;
label_1d109c:
    // 0x1d109c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d10a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d10a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10a8: 0xc074ca8  jal         func_1D32A0
    ctx->pc = 0x1D10A8u;
    SET_GPR_U32(ctx, 31, 0x1D10B0u);
    ctx->pc = 0x1D10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10A8u;
    // 0x1d10ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32A0u, 0x1D10A8u, 0x1D10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10B0u;
label_1d10b0:
    // 0x1d10b0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1d10b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d10b4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1d10b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d10b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d10b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d10bc: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x1d10bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d10c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d10c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d10c4: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x1d10c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d10c8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1d10c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1d10cc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1d10ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d10d0: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x1d10d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d10d4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1d10d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d10d8: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1d10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d10dc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1d10dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1d10e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d10e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1d10e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1d10e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1d10e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d10e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d10ec: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1d10ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d10f0: 0x0  nop
    ctx->pc = 0x1d10f0u;
    // NOP
    // 0x1d10f4: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1D10F4u;
    {
        const bool branch_taken_0x1d10f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10F4u;
        // 0x1d10f8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10f4) {
            ctx->pc = 0x1D1188u;
            goto label_1d1188;
        }
    }
    ctx->pc = 0x1D10FCu;
    // 0x1d10fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d1100: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x1D1100u;
    SET_GPR_U32(ctx, 31, 0x1D1108u);
    ctx->pc = 0x1D1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1100u;
    // 0x1d1104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x1D1100u, 0x1D1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1108u;
label_1d1108:
    // 0x1d1108: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x1d1108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d110c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d1110: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1d1110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1114: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d1118: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1d1118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d111c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1d111cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1d1120: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1d1120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1124: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d1124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1d1128: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1d1128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1d112c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d112cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d1130: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1d1130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d1134: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1d1134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d1138: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1d1138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d113c: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x1D113Cu;
    SET_GPR_U32(ctx, 31, 0x1D1144u);
    ctx->pc = 0x1D1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D113Cu;
    // 0x1d1140: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x1D113Cu, 0x1D1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1144u;
label_1d1144:
    // 0x1d1144: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1d1144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1148: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1d1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d114c: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1d114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d1150: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1d1150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d1154: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1d1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1158: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x1d1158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d115c: 0xc7a70088  lwc1        $f7, 0x88($sp)
    ctx->pc = 0x1d115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1d1160: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d1160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1d1164: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1d1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1168: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1d1168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1d116c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1d116cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1d1170: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1d1170u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1d1174: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1d1174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d1178: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1d1178u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d117c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x1d117cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d1180: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D1180u;
    {
        const bool branch_taken_0x1d1180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1180u;
        // 0x1d1184: 0xe7a5007c  swc1        $f5, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1180) {
            ctx->pc = 0x1D11DCu;
            goto label_1d11dc;
        }
    }
    ctx->pc = 0x1D1188u;
label_1d1188:
    // 0x1d1188: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d1188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d118c: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x1D118Cu;
    SET_GPR_U32(ctx, 31, 0x1D1194u);
    ctx->pc = 0x1D1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D118Cu;
    // 0x1d1190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x1D118Cu, 0x1D1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1194u;
label_1d1194:
    // 0x1d1194: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x1d1194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d1198: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d119c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1d119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d11a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d11a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d11a4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1d11a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d11a8: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1d11a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1d11ac: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1d11acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d11b0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d11b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1d11b4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1d11b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1d11b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d11b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d11bc: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1d11bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d11c0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1d11c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d11c4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1d11c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d11c8: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x1D11C8u;
    SET_GPR_U32(ctx, 31, 0x1D11D0u);
    ctx->pc = 0x1D11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11C8u;
    // 0x1d11cc: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x1D11C8u, 0x1D11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D0u;
label_1d11d0:
    // 0x1d11d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d11d4: 0xc0b1886  jal         func_2C6218
    ctx->pc = 0x1D11D4u;
    SET_GPR_U32(ctx, 31, 0x1D11DCu);
    ctx->pc = 0x1D11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11D4u;
    // 0x1d11d8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6218u, 0x1D11D4u, 0x1D11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11DCu;
label_1d11dc:
    // 0x1d11dc: 0x92220090  lbu         $v0, 0x90($s1)
    ctx->pc = 0x1d11dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1d11e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d11e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d11e4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D11E4u;
    {
        const bool branch_taken_0x1d11e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d11e4) {
            ctx->pc = 0x1D11E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D11E4u;
            // 0x1d11e8: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1258u;
            goto label_1d1258;
        }
    }
    ctx->pc = 0x1D11ECu;
    // 0x1d11ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d11f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1d11f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d11f4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1d11f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d11f8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d11f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d11fc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1200: 0x9643002a  lhu         $v1, 0x2A($s2)
    ctx->pc = 0x1d1200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1d1204: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1d1204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1d1208: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1208u;
    {
        const bool branch_taken_0x1d1208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1208u;
        // 0x1d120c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1208) {
            ctx->pc = 0x1D121Cu;
            goto label_1d121c;
        }
    }
    ctx->pc = 0x1D1210u;
    // 0x1d1210: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1d1210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1d1214: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1214u;
    {
        const bool branch_taken_0x1d1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1214u;
        // 0x1d1218: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1214) {
            ctx->pc = 0x1D1254u;
            goto label_1d1254;
        }
    }
    ctx->pc = 0x1D121Cu;
label_1d121c:
    // 0x1d121c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d121cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1220: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1d1220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d1224: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1228: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1d1228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d122c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D122Cu;
    {
        const bool branch_taken_0x1d122c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D122Cu;
        // 0x1d1230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d122c) {
            ctx->pc = 0x1D1254u;
            goto label_1d1254;
        }
    }
    ctx->pc = 0x1D1234u;
    // 0x1d1234: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d1238: 0xc074a1a  jal         func_1D2868
    ctx->pc = 0x1D1238u;
    SET_GPR_U32(ctx, 31, 0x1D1240u);
    ctx->pc = 0x1D123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1238u;
    // 0x1d123c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2868u, 0x1D1238u, 0x1D1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1240u;
label_1d1240:
    // 0x1d1240: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d1244: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d1244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1248: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1d1248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d124c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d124cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1250: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d1250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d1254:
    // 0x1d1254: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1258:
    // 0x1d1258: 0x1640ff71  bnez        $s2, . + 4 + (-0x8F << 2)
    ctx->pc = 0x1D1258u;
    {
        const bool branch_taken_0x1d1258 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1258u;
        // 0x1d125c: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1258) {
            ctx->pc = 0x1D1020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1020;
        }
    }
    ctx->pc = 0x1D1260u;
label_1d1260:
    // 0x1d1260: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d1264: 0x14a00081  bnez        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1D1264u;
    {
        const bool branch_taken_0x1d1264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1264u;
        // 0x1d1268: 0x32c20004  andi        $v0, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1264) {
            ctx->pc = 0x1D146Cu;
            goto label_1d146c;
        }
    }
    ctx->pc = 0x1D126Cu;
    // 0x1d126c: 0x13c0005a  beqz        $fp, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D126Cu;
    {
        const bool branch_taken_0x1d126c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d126c) {
            ctx->pc = 0x1D13D8u;
            goto label_1d13d8;
        }
    }
    ctx->pc = 0x1D1274u;
    // 0x1d1274: 0x12e0002f  beqz        $s7, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D1274u;
    {
        const bool branch_taken_0x1d1274 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1274u;
        // 0x1d1278: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1274) {
            ctx->pc = 0x1D1334u;
            goto label_1d1334;
        }
    }
    ctx->pc = 0x1D127Cu;
    // 0x1d127c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d1280: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d1280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1284: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d1284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1288: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d128c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1290: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1d1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d1294: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d1298: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1d1298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d129c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d12a0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d12a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d12a4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1d12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d12a8: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1d12a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d12ac: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1d12acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d12b0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1d12b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d12b4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1d12b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1d12b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d12b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d12bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d12bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d12c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d12c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d12c4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d12c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d12c8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1d12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d12cc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d12d0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d12d4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1d12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d12d8: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x1d12d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d12dc: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1d12dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d12e0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1d12e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d12e4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1d12e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d12e8: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x1d12e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1d12ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d12ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d12f0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d12f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d12f4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1d12f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d12f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12fc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d12fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1300: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d1304: 0xc074218  jal         func_1D0860
    ctx->pc = 0x1D1304u;
    SET_GPR_U32(ctx, 31, 0x1D130Cu);
    ctx->pc = 0x1D1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1304u;
    // 0x1d1308: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0860u, 0x1D1304u, 0x1D130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D130Cu;
label_1d130c:
    // 0x1d130c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1310: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1d1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1314: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d1314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d1318: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1d1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d131c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1d131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1320: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1d1320u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d1324: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d1324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1d1328: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1d1328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1d132c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1D132Cu;
    {
        const bool branch_taken_0x1d132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D132Cu;
        // 0x1d1330: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d132c) {
            ctx->pc = 0x1D141Cu;
            goto label_1d141c;
        }
    }
    ctx->pc = 0x1D1334u;
label_1d1334:
    // 0x1d1334: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1d1334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d1338: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d1338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d133c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d133cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1340: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1340u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1344: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d1344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1348: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1d1348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d134c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1d134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d1350: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1d1350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1354: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d1358: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d1358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d135c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1d135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1360: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1d1360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d1364: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1d1364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d1368: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1d1368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d136c: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1d136cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1d1370: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d1370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1374: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d1374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1378: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d137c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1380: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1d1380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d1384: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1d1384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d1388: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d138c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1d138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1390: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x1d1390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1394: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1d1394u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d1398: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1d1398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d139c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1d139cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d13a0: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x1d13a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1d13a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d13a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d13a8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d13ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d13b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d13b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1d13b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d13b8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1d13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d13bc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1d13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d13c0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1d13c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d13c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d13c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d13c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1d13c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1d13cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1d13ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d13d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D13D0u;
    {
        const bool branch_taken_0x1d13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D0u;
        // 0x1d13d4: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d0) {
            ctx->pc = 0x1D141Cu;
            goto label_1d141c;
        }
    }
    ctx->pc = 0x1D13D8u;
label_1d13d8:
    // 0x1d13d8: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D13D8u;
    {
        const bool branch_taken_0x1d13d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13d8) {
            ctx->pc = 0x1D141Cu;
            goto label_1d141c;
        }
    }
    ctx->pc = 0x1D13E0u;
    // 0x1d13e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d13e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d13e8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d13ec: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d13f0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1d13f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d13f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d13f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d13f8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d13fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d13fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d1400: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d1400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d1404: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d1408: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d140c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1d140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1410: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d1410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1414: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d1418: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1d1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1d141c:
    // 0x1d141c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x1d1420: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x1d1420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x1d1424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1428: 0x0  nop
    ctx->pc = 0x1d1428u;
    // NOP
    // 0x1d142c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1d142cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1430: 0x0  nop
    ctx->pc = 0x1d1430u;
    // NOP
    // 0x1d1434: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1D1434u;
    {
        const bool branch_taken_0x1d1434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1434u;
        // 0x1d1438: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1434) {
            ctx->pc = 0x1D1464u;
            goto label_1d1464;
        }
    }
    ctx->pc = 0x1D143Cu;
    // 0x1d143c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d143cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1444: 0x0  nop
    ctx->pc = 0x1d1444u;
    // NOP
    // 0x1d1448: 0x0  nop
    ctx->pc = 0x1d1448u;
    // NOP
    // 0x1d144c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1d144cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x1d1450: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d1450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d1454: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d1454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1458: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d1458u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d145c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1d145cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1460: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d1464:
    // 0x1d1464: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x1d1464u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x1d1468: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x1d1468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_1d146c:
    // 0x1d146c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D146Cu;
    {
        const bool branch_taken_0x1d146c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D146Cu;
        // 0x1d1470: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d146c) {
            ctx->pc = 0x1D14E0u;
            goto label_1d14e0;
        }
    }
    ctx->pc = 0x1D1474u;
    // 0x1d1474: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1d1474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1d1478: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1478u;
        // 0x1d147c: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D14E4u;
            goto label_1d14e4;
        }
    }
    ctx->pc = 0x1D1480u;
    // 0x1d1480: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1484: 0xc0f756e  jal         func_3DD5B8
    ctx->pc = 0x1D1484u;
    SET_GPR_U32(ctx, 31, 0x1D148Cu);
    ctx->pc = 0x1D1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1484u;
    // 0x1d1488: 0x36d60002  ori         $s6, $s6, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5B8u, 0x1D1484u, 0x1D148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D148Cu;
label_1d148c:
    // 0x1d148c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d1490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1494: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x1d1494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d1498: 0x0  nop
    ctx->pc = 0x1d1498u;
    // NOP
    // 0x1d149c: 0x0  nop
    ctx->pc = 0x1d149cu;
    // NOP
    // 0x1d14a0: 0x46000856  rsqrt.s     $f1, $f1, $f0
    ctx->pc = 0x1d14a0u;
    ctx->f[1] = FPU_RSQRT_S(ctx->f[1], ctx->f[0]);
    // 0x1d14a4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1d14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d14a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1d14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d14ac: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1d14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d14b0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1d14b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d14b4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1d14b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1d14b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d14b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d14bc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1d14bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1d14c0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x1d14c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d14c4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1d14c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1d14c8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1d14c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1d14cc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1d14ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1d14d0: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x1d14d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d14d4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1d14d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d14d8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1d14d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d14dc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x1d14dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1d14e0:
    // 0x1d14e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1d14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d14e4:
    // 0x1d14e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d14e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14e8: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1d14e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d14ec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1d14ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14f0: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x1d14f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d14f4: 0xc0742ee  jal         func_1D0BB8
    ctx->pc = 0x1D14F4u;
    SET_GPR_U32(ctx, 31, 0x1D14FCu);
    ctx->pc = 0x1D14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14F4u;
    // 0x1d14f8: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BB8u, 0x1D14F4u, 0x1D14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14FCu;
label_1d14fc:
    // 0x1d14fc: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1d14fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d1500: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1d1500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d1504: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1d1504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1508: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1d1508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d150c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1d150cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1510: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x1d1510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d1514: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x1d1514u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d1518: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x1d1518u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d151c: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x1d151cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d1520: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1d1520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d1524: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1d1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d1528: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1d1528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d152c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1d152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1530: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1530u;
        // 0x1d1534: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1538u;
}
