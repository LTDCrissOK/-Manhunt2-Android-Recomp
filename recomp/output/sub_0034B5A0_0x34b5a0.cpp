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

// Function: sub_0034B5A0
// Address: 0x34b5a0 - 0x34bc68
void sub_0034B5A0_0x34b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B5A0_0x34b5a0");
#endif

    switch (ctx->pc) {
        case 0x34b5ecu: goto label_34b5ec;
        case 0x34b5f4u: goto label_34b5f4;
        case 0x34b5fcu: goto label_34b5fc;
        case 0x34b690u: goto label_34b690;
        case 0x34b738u: goto label_34b738;
        case 0x34b794u: goto label_34b794;
        case 0x34b7a8u: goto label_34b7a8;
        case 0x34b7b0u: goto label_34b7b0;
        case 0x34b7b8u: goto label_34b7b8;
        case 0x34b7c4u: goto label_34b7c4;
        case 0x34b7d4u: goto label_34b7d4;
        case 0x34baf8u: goto label_34baf8;
        case 0x34bb0cu: goto label_34bb0c;
        case 0x34bb20u: goto label_34bb20;
        case 0x34bb34u: goto label_34bb34;
        case 0x34bb48u: goto label_34bb48;
        case 0x34bb54u: goto label_34bb54;
        case 0x34bb88u: goto label_34bb88;
        case 0x34bbf4u: goto label_34bbf4;
        default: break;
    }

    ctx->pc = 0x34b5a0u;

    // 0x34b5a0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x34b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x34b5a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x34b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34b5a8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x34b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x34b5ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5b0: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x34b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x34b5b4: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x34b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x34b5b8: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x34b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x34b5bc: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x34b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x34b5c0: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x34b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x34b5c4: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x34b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x34b5c8: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x34b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x34b5cc: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x34b5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x34b5d0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x34b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x34b5d4: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x34b5d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x34b5d8: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x34b5d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x34b5dc: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x34b5dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x34b5e0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x34b5e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x34b5e4: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34B5E4u;
    SET_GPR_U32(ctx, 31, 0x34B5ECu);
    ctx->pc = 0x34B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5E4u;
    // 0x34b5e8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34B5E4u, 0x34B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5ECu;
label_34b5ec:
    // 0x34b5ec: 0xc0d3678  jal         func_34D9E0
    ctx->pc = 0x34B5ECu;
    SET_GPR_U32(ctx, 31, 0x34B5F4u);
    ctx->pc = 0x34D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D9E0u, 0x34B5ECu, 0x34B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5F4u;
label_34b5f4:
    // 0x34b5f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B5F4u;
    SET_GPR_U32(ctx, 31, 0x34B5FCu);
    ctx->pc = 0x34B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5F4u;
    // 0x34b5f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B5F4u, 0x34B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5FCu;
label_34b5fc:
    // 0x34b5fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34b600: 0x8c432ce0  lw          $v1, 0x2CE0($v0)
    ctx->pc = 0x34b600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CE0u));
    // 0x34b604: 0x10600186  beqz        $v1, . + 4 + (0x186 << 2)
    ctx->pc = 0x34B604u;
    {
        const bool branch_taken_0x34b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B604u;
        // 0x34b608: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b604) {
            ctx->pc = 0x34BC20u;
            goto label_34bc20;
        }
    }
    ctx->pc = 0x34B60Cu;
    // 0x34b60c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x34b60cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x34b610: 0x8c45bcec  lw          $a1, -0x4314($v0)
    ctx->pc = 0x34b610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950124)));
    // 0x34b614: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x34b614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x34b618: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x34b618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x34b61c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x34b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x34b620: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x34b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x34b624: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x34b624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b628: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34b628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34b62c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34b62cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34b630: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x34b630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x34b634: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x34b634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34b638: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x34b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x34b63c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x34b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x34b640: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x34b640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34b644: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x34b644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x34b648: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x34b648u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34b64c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x34b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34b650: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34b654: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34b654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34b658: 0x8cc3bcf8  lw          $v1, -0x4308($a2)
    ctx->pc = 0x34b658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCF8u));
    // 0x34b65c: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x34b65cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34b660: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x34b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x34b664: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x34b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x34b668: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x34b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x34b66c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34b670: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x34b670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x34b674: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x34b674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x34b678: 0x8ce3bcf0  lw          $v1, -0x4310($a3)
    ctx->pc = 0x34b678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950128)));
    // 0x34b67c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x34b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x34b680: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x34b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x34b684: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x34b684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x34b688: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x34b688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x34b68c: 0x0  nop
    ctx->pc = 0x34b68cu;
    // NOP
label_34b690:
    // 0x34b690: 0x1511c0  sll         $v0, $s5, 7
    ctx->pc = 0x34b690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x34b694: 0x24a3b610  addiu       $v1, $a1, -0x49F0
    ctx->pc = 0x34b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
    // 0x34b698: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x34b698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34b69c: 0x92640075  lbu         $a0, 0x75($s3)
    ctx->pc = 0x34b69cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 117)));
    // 0x34b6a0: 0x10800154  beqz        $a0, . + 4 + (0x154 << 2)
    ctx->pc = 0x34B6A0u;
    {
        const bool branch_taken_0x34b6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6A0u;
        // 0x34b6a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6a0) {
            ctx->pc = 0x34BBF4u;
            goto label_34bbf4;
        }
    }
    ctx->pc = 0x34B6A8u;
    // 0x34b6a8: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x34b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x34b6ac: 0x8c46bcf0  lw          $a2, -0x4310($v0)
    ctx->pc = 0x34b6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x34b6b0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34b6b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b6bc: 0xaca2bce4  sw          $v0, -0x431C($a1)
    ctx->pc = 0x34b6bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x34b6c0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x34b6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x34b6c4: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x34b6c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x34b6c8: 0x6a630037  ldl         $v1, 0x37($s3)
    ctx->pc = 0x34b6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34b6cc: 0x6e630030  ldr         $v1, 0x30($s3)
    ctx->pc = 0x34b6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34b6d0: 0x6a64003f  ldl         $a0, 0x3F($s3)
    ctx->pc = 0x34b6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34b6d4: 0x6e640038  ldr         $a0, 0x38($s3)
    ctx->pc = 0x34b6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34b6d8: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x34b6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b6dc: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x34b6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b6e0: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x34b6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b6e4: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x34b6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b6e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x34b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b6ec: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x34b6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x34b6f0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x34b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b6f4: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x34b6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x34b6f8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x34b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b6fc: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x34b6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x34b700: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x34b700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x34b704: 0x8ce2bd5c  lw          $v0, -0x42A4($a3)
    ctx->pc = 0x34b704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x34b708: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x34B708u;
    {
        const bool branch_taken_0x34b708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B708u;
        // 0x34b70c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b708) {
            ctx->pc = 0x34B78Cu;
            goto label_34b78c;
        }
    }
    ctx->pc = 0x34B710u;
    // 0x34b710: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x34b714: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x34b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x34b718: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34b71c: 0x2c4207d0  sltiu       $v0, $v0, 0x7D0
    ctx->pc = 0x34b71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x34b720: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34B720u;
    {
        const bool branch_taken_0x34b720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b720) {
            ctx->pc = 0x34B78Cu;
            goto label_34b78c;
        }
    }
    ctx->pc = 0x34B728u;
    // 0x34b728: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x34b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x34b72c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b730: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34B730u;
    SET_GPR_U32(ctx, 31, 0x34B738u);
    ctx->pc = 0x34B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B730u;
    // 0x34b734: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34B730u, 0x34B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B738u;
label_34b738:
    // 0x34b738: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34b73c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34B73Cu;
    {
        const bool branch_taken_0x34b73c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B73Cu;
        // 0x34b740: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b73c) {
            ctx->pc = 0x34B758u;
            goto label_34b758;
        }
    }
    ctx->pc = 0x34B744u;
    // 0x34b744: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34b744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b748: 0x0  nop
    ctx->pc = 0x34b748u;
    // NOP
    // 0x34b74c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34b74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34b750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34B750u;
    {
        const bool branch_taken_0x34b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b750) {
            ctx->pc = 0x34B770u;
            goto label_34b770;
        }
    }
    ctx->pc = 0x34B758u;
label_34b758:
    // 0x34b758: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34b758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34b75c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34b760: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34b760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b764: 0x0  nop
    ctx->pc = 0x34b764u;
    // NOP
    // 0x34b768: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34b768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34b76c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34b76cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34b770:
    // 0x34b770: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x34b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x34b774: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x34b774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x34b778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b77c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x34b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b780: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34b780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34b784: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34b784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b788: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x34b788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_34b78c:
    // 0x34b78c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34B78Cu;
    SET_GPR_U32(ctx, 31, 0x34B794u);
    ctx->pc = 0x34B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B78Cu;
    // 0x34b790: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34B78Cu, 0x34B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B794u;
label_34b794:
    // 0x34b794: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x34b794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34b798: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34b79c: 0x8c54bd48  lw          $s4, -0x42B8($v0)
    ctx->pc = 0x34b79cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34b7a0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34B7A0u;
    SET_GPR_U32(ctx, 31, 0x34B7A8u);
    ctx->pc = 0x34B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7A0u;
    // 0x34b7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34B7A0u, 0x34B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7A8u;
label_34b7a8:
    // 0x34b7a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B7A8u;
    SET_GPR_U32(ctx, 31, 0x34B7B0u);
    ctx->pc = 0x34B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7A8u;
    // 0x34b7ac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B7A8u, 0x34B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7B0u;
label_34b7b0:
    // 0x34b7b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B7B0u;
    SET_GPR_U32(ctx, 31, 0x34B7B8u);
    ctx->pc = 0x34B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7B0u;
    // 0x34b7b4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B7B0u, 0x34B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7B8u;
label_34b7b8:
    // 0x34b7b8: 0x8e900100  lw          $s0, 0x100($s4)
    ctx->pc = 0x34b7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x34b7bc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x34B7BCu;
    SET_GPR_U32(ctx, 31, 0x34B7C4u);
    ctx->pc = 0x34B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7BCu;
    // 0x34b7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x34B7BCu, 0x34B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7C4u;
label_34b7c4:
    // 0x34b7c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B7C4u;
    {
        const bool branch_taken_0x34b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7C4u;
        // 0x34b7c8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b7c4) {
            ctx->pc = 0x34B7D8u;
            goto label_34b7d8;
        }
    }
    ctx->pc = 0x34B7CCu;
    // 0x34b7cc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x34B7CCu;
    SET_GPR_U32(ctx, 31, 0x34B7D4u);
    ctx->pc = 0x34B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7CCu;
    // 0x34b7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x34B7CCu, 0x34B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7D4u;
label_34b7d4:
    // 0x34b7d4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x34b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_34b7d8:
    // 0x34b7d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34b7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b7dc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b7e0: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x34b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34b7e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34b7e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b7e8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b7ec: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x34b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x34b7f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34b7f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b7f4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x34b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b7f8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x34b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x34b7fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34b7fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b800: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x34b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b804: 0xc68000e0  lwc1        $f0, 0xE0($s4)
    ctx->pc = 0x34b804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b808: 0x0  nop
    ctx->pc = 0x34b808u;
    // NOP
    // 0x34b80c: 0x4600c143  div.s       $f5, $f24, $f0
    ctx->pc = 0x34b80cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
    // 0x34b810: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x34b810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34b814: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34b814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34b818: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34b818u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34b81c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34b81cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b820: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x34b820u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b824: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34b824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34b828: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x34b828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34b82c: 0x0  nop
    ctx->pc = 0x34b82cu;
    // NOP
    // 0x34b830: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x34b830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34b834: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x34b834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x34b838: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34b838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34b83c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34b83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b840: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b844: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x34b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34b848: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x34b848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34b84c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34b84cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b850: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b854: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x34b854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b858: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x34b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b85c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x34b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b860: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x34b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b864: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x34b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b868: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x34b868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34b86c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x34b86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34b870: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x34b870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34b874: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x34b874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34b878: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x34b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x34b87c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34b87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b880: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b884: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x34b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b888: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x34b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b88c: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x34b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b890: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x34b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34b894: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x34b894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34b898: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x34b898u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34b89c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x34b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b8a0: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x34b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b8a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34b8a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b8a8: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x34b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b8ac: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x34b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b8b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34b8b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34b8b4: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x34b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b8b8: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x34b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b8bc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34b8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b8c0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34b8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34b8c4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x34b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34b8c8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x34b8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34b8cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34b8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34b8d0: 0xc68100e4  lwc1        $f1, 0xE4($s4)
    ctx->pc = 0x34b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b8d4: 0x0  nop
    ctx->pc = 0x34b8d4u;
    // NOP
    // 0x34b8d8: 0x4601c143  div.s       $f5, $f24, $f1
    ctx->pc = 0x34b8d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x34b8dc: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x34b8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34b8e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34b8e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b8e4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34b8e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34b8e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34b8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b8ec: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b8f0: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x34b8f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34b8f4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x34b8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x34b8f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34b8f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b8fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34b8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b900: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b904: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x34b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34b908: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x34b908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34b90c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34b90cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b910: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b914: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x34b914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b918: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x34b918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b91c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x34b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b920: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x34b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b924: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x34b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b928: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x34b928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34b92c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x34b92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34b930: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x34b930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34b934: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x34b934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34b938: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x34b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x34b93c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34b93cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b940: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34b940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b944: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x34b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b948: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x34b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b94c: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x34b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b950: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34b950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34b954: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x34b954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34b958: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x34b958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34b95c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x34b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b960: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x34b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b964: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34b964u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b968: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x34b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b96c: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x34b96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b970: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34b970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34b974: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x34b974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b978: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x34b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b97c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x34b97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b980: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x34b980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x34b984: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b988: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x34b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b98c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x34b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b990: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x34b990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x34b994: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x34b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34b998: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34b998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34b99c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x34b99cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34b9a0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x34b9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34b9a4: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x34b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b9a8: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x34b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b9ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34b9acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b9b0: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x34b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b9b4: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x34b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b9b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34b9b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34b9bc: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x34b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b9c0: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x34b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b9c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34b9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34b9c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34b9c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34b9cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x34b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b9d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x34b9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34b9d4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x34b9d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34b9d8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x34b9d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34b9dc: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x34b9dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34b9e0: 0xd8a40020  lqc2        $vf4, 0x20($a1)
    ctx->pc = 0x34b9e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34b9e4: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x34b9e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x34b9e8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x34b9e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34b9ec: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34b9ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34b9f0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34b9f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34b9f4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x34b9f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b9f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b9fc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x34b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ba00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34ba00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ba04: 0x0  nop
    ctx->pc = 0x34ba04u;
    // NOP
    // 0x34ba08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34ba08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba0c: 0x0  nop
    ctx->pc = 0x34ba0cu;
    // NOP
    // 0x34ba10: 0x45000078  bc1f        . + 4 + (0x78 << 2)
    ctx->pc = 0x34BA10u;
    {
        const bool branch_taken_0x34ba10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA10u;
        // 0x34ba14: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba10) {
            ctx->pc = 0x34BBF4u;
            goto label_34bbf4;
        }
    }
    ctx->pc = 0x34BA18u;
    // 0x34ba18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x34ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ba1c: 0x0  nop
    ctx->pc = 0x34ba1cu;
    // NOP
    // 0x34ba20: 0x0  nop
    ctx->pc = 0x34ba20u;
    // NOP
    // 0x34ba24: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34ba24u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34ba28: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x34ba28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x34ba2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34ba2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34ba30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34ba30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34ba34: 0x0  nop
    ctx->pc = 0x34ba34u;
    // NOP
    // 0x34ba38: 0x0  nop
    ctx->pc = 0x34ba38u;
    // NOP
    // 0x34ba3c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x34ba3cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x34ba40: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x34ba40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34ba44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34ba48: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x34BA48u;
    {
        const bool branch_taken_0x34ba48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA48u;
        // 0x34ba4c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba48) {
            ctx->pc = 0x34BBF4u;
            goto label_34bbf4;
        }
    }
    ctx->pc = 0x34BA50u;
    // 0x34ba50: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x34ba50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba54: 0x0  nop
    ctx->pc = 0x34ba54u;
    // NOP
    // 0x34ba58: 0x45020067  bc1fl       . + 4 + (0x67 << 2)
    ctx->pc = 0x34BA58u;
    {
        const bool branch_taken_0x34ba58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ba58) {
            ctx->pc = 0x34BA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BA58u;
            // 0x34ba5c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBF8u;
            goto label_34bbf8;
        }
    }
    ctx->pc = 0x34BA60u;
    // 0x34ba60: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x34ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x34ba64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34ba64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34ba68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34ba68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34ba6c: 0x0  nop
    ctx->pc = 0x34ba6cu;
    // NOP
    // 0x34ba70: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34ba70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba74: 0x0  nop
    ctx->pc = 0x34ba74u;
    // NOP
    // 0x34ba78: 0x4502005f  bc1fl       . + 4 + (0x5F << 2)
    ctx->pc = 0x34BA78u;
    {
        const bool branch_taken_0x34ba78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ba78) {
            ctx->pc = 0x34BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BA78u;
            // 0x34ba7c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBF8u;
            goto label_34bbf8;
        }
    }
    ctx->pc = 0x34BA80u;
    // 0x34ba80: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34ba80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ba84: 0x0  nop
    ctx->pc = 0x34ba84u;
    // NOP
    // 0x34ba88: 0x4502005b  bc1fl       . + 4 + (0x5B << 2)
    ctx->pc = 0x34BA88u;
    {
        const bool branch_taken_0x34ba88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ba88) {
            ctx->pc = 0x34BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BA88u;
            // 0x34ba8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBF8u;
            goto label_34bbf8;
        }
    }
    ctx->pc = 0x34BA90u;
    // 0x34ba90: 0x92620074  lbu         $v0, 0x74($s3)
    ctx->pc = 0x34ba90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x34ba94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34ba98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34ba98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34ba9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BA9Cu;
    {
        const bool branch_taken_0x34ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA9Cu;
        // 0x34baa0: 0xc6750060  lwc1        $f21, 0x60($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba9c) {
            ctx->pc = 0x34BABCu;
            goto label_34babc;
        }
    }
    ctx->pc = 0x34BAA4u;
    // 0x34baa4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34baa8: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x34baac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34bab0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34BAB0u;
    {
        const bool branch_taken_0x34bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bab0) {
            ctx->pc = 0x34BAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BAB0u;
            // 0x34bab4: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BABCu;
            goto label_34babc;
        }
    }
    ctx->pc = 0x34BAB8u;
    // 0x34bab8: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x34bab8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_34babc:
    // 0x34babc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34bac0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34bac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34bac4: 0x2a3001a  div         $zero, $s5, $v1
    ctx->pc = 0x34bac4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34bac8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34BAC8u;
    {
        const bool branch_taken_0x34bac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bac8) {
            ctx->pc = 0x34BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BAC8u;
            // 0x34bacc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BAD0u;
            goto label_34bad0;
        }
    }
    ctx->pc = 0x34BAD0u;
label_34bad0:
    // 0x34bad0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34bad4: 0x2463c5f8  addiu       $v1, $v1, -0x3A08
    ctx->pc = 0x34bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952440));
    // 0x34bad8: 0x1010  mfhi        $v0
    ctx->pc = 0x34bad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34badc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34badcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34bae4: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x34bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34bae8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x34bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x34baec: 0xe6540014  swc1        $f20, 0x14($s2)
    ctx->pc = 0x34baecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x34baf0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34BAF0u;
    SET_GPR_U32(ctx, 31, 0x34BAF8u);
    ctx->pc = 0x34BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BAF0u;
    // 0x34baf4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34BAF0u, 0x34BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BAF8u;
label_34baf8:
    // 0x34baf8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34baf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34bafc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x34bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x34bb00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34bb00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34bb04: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34BB04u;
    SET_GPR_U32(ctx, 31, 0x34BB0Cu);
    ctx->pc = 0x34BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB04u;
    // 0x34bb08: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34BB04u, 0x34BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB0Cu;
label_34bb0c:
    // 0x34bb0c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x34bb0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x34bb10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34bb10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34bb14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34bb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34bb18: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34BB18u;
    SET_GPR_U32(ctx, 31, 0x34BB20u);
    ctx->pc = 0x34BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB18u;
    // 0x34bb1c: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34BB18u, 0x34BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB20u;
label_34bb20:
    // 0x34bb20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34bb20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34bb24: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x34bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x34bb28: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34bb28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34bb2c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34BB2Cu;
    SET_GPR_U32(ctx, 31, 0x34BB34u);
    ctx->pc = 0x34BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB2Cu;
    // 0x34bb30: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34BB2Cu, 0x34BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB34u;
label_34bb34:
    // 0x34bb34: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x34bb34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34bb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34bb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb40: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x34BB40u;
    SET_GPR_U32(ctx, 31, 0x34BB48u);
    ctx->pc = 0x34BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB40u;
    // 0x34bb44: 0xe6540028  swc1        $f20, 0x28($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x34BB40u, 0x34BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB48u;
label_34bb48:
    // 0x34bb48: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x34bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x34bb4c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x34BB4Cu;
    SET_GPR_U32(ctx, 31, 0x34BB54u);
    ctx->pc = 0x34BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB4Cu;
    // 0x34bb50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x34BB4Cu, 0x34BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB54u;
label_34bb54:
    // 0x34bb54: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bb58: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x34bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x34bb5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34bb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34bb60: 0x0  nop
    ctx->pc = 0x34bb60u;
    // NOP
    // 0x34bb64: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34bb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bb68: 0x0  nop
    ctx->pc = 0x34bb68u;
    // NOP
    // 0x34bb6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34BB6Cu;
    {
        const bool branch_taken_0x34bb6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB6Cu;
        // 0x34bb70: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb6c) {
            ctx->pc = 0x34BB90u;
            goto label_34bb90;
        }
    }
    ctx->pc = 0x34BB74u;
    // 0x34bb74: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x34bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x34bb78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bb7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb80: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x34BB80u;
    SET_GPR_U32(ctx, 31, 0x34BB88u);
    ctx->pc = 0x34BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB80u;
    // 0x34bb84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x34BB80u, 0x34BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB88u;
label_34bb88:
    // 0x34bb88: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34BB88u;
    {
        const bool branch_taken_0x34bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB88u;
        // 0x34bb8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb88) {
            ctx->pc = 0x34BBF8u;
            goto label_34bbf8;
        }
    }
    ctx->pc = 0x34BB90u;
label_34bb90:
    // 0x34bb90: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x34bb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x34bb94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34bb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bb98: 0x0  nop
    ctx->pc = 0x34bb98u;
    // NOP
    // 0x34bb9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34bb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bba0: 0x0  nop
    ctx->pc = 0x34bba0u;
    // NOP
    // 0x34bba4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x34BBA4u;
    {
        const bool branch_taken_0x34bba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBA4u;
        // 0x34bba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bba4) {
            ctx->pc = 0x34BBF4u;
            goto label_34bbf4;
        }
    }
    ctx->pc = 0x34BBACu;
    // 0x34bbac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34bbacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34bbb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34bbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34bbb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34bbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bbb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34bbbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34bbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34bbc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34bbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34bbc4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x34bbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x34bbc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34bbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34bbcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34bbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x34bbd4: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x34bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x34bbd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34bbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34bbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34bbe0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x34bbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34bbe4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34bbe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34bbe8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x34bbe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34bbec: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x34BBECu;
    SET_GPR_U32(ctx, 31, 0x34BBF4u);
    ctx->pc = 0x34BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BBECu;
    // 0x34bbf0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x34BBECu, 0x34BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBF4u;
label_34bbf4:
    // 0x34bbf4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x34bbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_34bbf8:
    // 0x34bbf8: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x34bbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34bbfc: 0x5440fea4  bnel        $v0, $zero, . + 4 + (-0x15C << 2)
    ctx->pc = 0x34BBFCu;
    {
        const bool branch_taken_0x34bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bbfc) {
            ctx->pc = 0x34BC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BBFCu;
            // 0x34bc00: 0x3c05005c  lui         $a1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b690;
        }
    }
    ctx->pc = 0x34BC04u;
    // 0x34bc04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34bc08: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x34bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x34bc0c: 0x8c44bcf0  lw          $a0, -0x4310($v0)
    ctx->pc = 0x34bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x34bc10: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x34bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x34bc14: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x34bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x34bc18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34bc1c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x34bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_34bc20:
    // 0x34bc20: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x34bc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34bc24: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x34bc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34bc28: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x34bc28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34bc2c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x34bc2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34bc30: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x34bc30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34bc34: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x34bc34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x34bc38: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x34bc38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34bc3c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x34bc3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34bc40: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x34bc40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34bc44: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x34bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bc48: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x34bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34bc4c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x34bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34bc50: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x34bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34bc54: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x34bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34bc58: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x34bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34bc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC5Cu;
        // 0x34bc60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BC64u;
    // 0x34bc64: 0x0  nop
    ctx->pc = 0x34bc64u;
    // NOP
    ctx->pc = 0x34bc68u;
}
