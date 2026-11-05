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

// Function: sub_0034FCA0
// Address: 0x34fca0 - 0x3502d8
void sub_0034FCA0_0x34fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FCA0_0x34fca0");
#endif

    switch (ctx->pc) {
        case 0x34fd04u: goto label_34fd04;
        case 0x34fd10u: goto label_34fd10;
        case 0x34fd1cu: goto label_34fd1c;
        case 0x34fd28u: goto label_34fd28;
        case 0x34fd34u: goto label_34fd34;
        case 0x34fd40u: goto label_34fd40;
        case 0x34fd4cu: goto label_34fd4c;
        case 0x34fd58u: goto label_34fd58;
        case 0x34fd60u: goto label_34fd60;
        case 0x34fdbcu: goto label_34fdbc;
        case 0x34fe18u: goto label_34fe18;
        case 0x34fe78u: goto label_34fe78;
        case 0x34febcu: goto label_34febc;
        case 0x34ff40u: goto label_34ff40;
        case 0x350020u: goto label_350020;
        case 0x35008cu: goto label_35008c;
        case 0x350098u: goto label_350098;
        case 0x3500a4u: goto label_3500a4;
        case 0x3500b4u: goto label_3500b4;
        case 0x3501c8u: goto label_3501c8;
        case 0x350214u: goto label_350214;
        case 0x350250u: goto label_350250;
        case 0x350270u: goto label_350270;
        case 0x350278u: goto label_350278;
        default: break;
    }

    ctx->pc = 0x34fca0u;

    // 0x34fca0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x34fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x34fca4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x34fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x34fca8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x34fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x34fcac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34fcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fcb0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x34fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x34fcb4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x34fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x34fcb8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x34fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x34fcbc: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x34fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x34fcc0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x34fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x34fcc4: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x34fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x34fcc8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x34fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x34fccc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x34fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x34fcd0: 0xe7bf0128  swc1        $f31, 0x128($sp)
    ctx->pc = 0x34fcd0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x34fcd4: 0xe7be0120  swc1        $f30, 0x120($sp)
    ctx->pc = 0x34fcd4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34fcd8: 0xe7bd0118  swc1        $f29, 0x118($sp)
    ctx->pc = 0x34fcd8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x34fcdc: 0xe7bc0110  swc1        $f28, 0x110($sp)
    ctx->pc = 0x34fcdcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x34fce0: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x34fce0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34fce4: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x34fce4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x34fce8: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x34fce8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34fcec: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x34fcecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34fcf0: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x34fcf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34fcf4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x34fcf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34fcf8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x34fcf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34fcfc: 0xc0db198  jal         func_36C660
    ctx->pc = 0x34FCFCu;
    SET_GPR_U32(ctx, 31, 0x34FD04u);
    ctx->pc = 0x34FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FCFCu;
    // 0x34fd00: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x34FCFCu, 0x34FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD04u;
label_34fd04:
    // 0x34fd04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fd08: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD08u;
    SET_GPR_U32(ctx, 31, 0x34FD10u);
    ctx->pc = 0x34FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD08u;
    // 0x34fd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD08u, 0x34FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD10u;
label_34fd10:
    // 0x34fd10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34fd14: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x34FD14u;
    SET_GPR_U32(ctx, 31, 0x34FD1Cu);
    ctx->pc = 0x34FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD14u;
    // 0x34fd18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x34FD14u, 0x34FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD1Cu;
label_34fd1c:
    // 0x34fd1c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34fd20: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD20u;
    SET_GPR_U32(ctx, 31, 0x34FD28u);
    ctx->pc = 0x34FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD20u;
    // 0x34fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD20u, 0x34FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD28u;
label_34fd28:
    // 0x34fd28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34fd2c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD2Cu;
    SET_GPR_U32(ctx, 31, 0x34FD34u);
    ctx->pc = 0x34FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD2Cu;
    // 0x34fd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD2Cu, 0x34FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD34u;
label_34fd34:
    // 0x34fd34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x34fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34fd38: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD38u;
    SET_GPR_U32(ctx, 31, 0x34FD40u);
    ctx->pc = 0x34FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD38u;
    // 0x34fd3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD38u, 0x34FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD40u;
label_34fd40:
    // 0x34fd40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x34fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34fd44: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD44u;
    SET_GPR_U32(ctx, 31, 0x34FD4Cu);
    ctx->pc = 0x34FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD44u;
    // 0x34fd48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD44u, 0x34FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD4Cu;
label_34fd4c:
    // 0x34fd4c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x34fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x34fd50: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34FD50u;
    SET_GPR_U32(ctx, 31, 0x34FD58u);
    ctx->pc = 0x34FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD50u;
    // 0x34fd54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34FD50u, 0x34FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD58u;
label_34fd58:
    // 0x34fd58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fd5c: 0x0  nop
    ctx->pc = 0x34fd5cu;
    // NOP
label_34fd60:
    // 0x34fd60: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x34FD60u;
    {
        const bool branch_taken_0x34fd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x34FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD60u;
        // 0x34fd64: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd60) {
            ctx->pc = 0x34FDF4u;
            goto label_34fdf4;
        }
    }
    ctx->pc = 0x34FD68u;
    // 0x34fd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FD68u;
    {
        const bool branch_taken_0x34fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD68u;
        // 0x34fd6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd68) {
            ctx->pc = 0x34FD80u;
            goto label_34fd80;
        }
    }
    ctx->pc = 0x34FD70u;
    // 0x34fd70: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FD70u;
    {
        const bool branch_taken_0x34fd70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD70u;
        // 0x34fd74: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd70) {
            ctx->pc = 0x34FD98u;
            goto label_34fd98;
        }
    }
    ctx->pc = 0x34FD78u;
    // 0x34fd78: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x34FD78u;
    {
        const bool branch_taken_0x34fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd78) {
            ctx->pc = 0x34FEE8u;
            goto label_34fee8;
        }
    }
    ctx->pc = 0x34FD80u;
label_34fd80:
    // 0x34fd80: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x34FD80u;
    {
        const bool branch_taken_0x34fd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x34FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD80u;
        // 0x34fd84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd80) {
            ctx->pc = 0x34FE50u;
            goto label_34fe50;
        }
    }
    ctx->pc = 0x34FD88u;
    // 0x34fd88: 0x12020040  beq         $s0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x34FD88u;
    {
        const bool branch_taken_0x34fd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x34FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD88u;
        // 0x34fd8c: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd88) {
            ctx->pc = 0x34FE8Cu;
            goto label_34fe8c;
        }
    }
    ctx->pc = 0x34FD90u;
    // 0x34fd90: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x34FD90u;
    {
        const bool branch_taken_0x34fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd90) {
            ctx->pc = 0x34FEE8u;
            goto label_34fee8;
        }
    }
    ctx->pc = 0x34FD98u;
label_34fd98:
    // 0x34fd98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34fd9c: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x34fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x34fda0: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x34fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x34fda4: 0x8c6401bc  lw          $a0, 0x1BC($v1)
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x34fda8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fdb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdb4: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x34FDB4u;
    SET_GPR_U32(ctx, 31, 0x34FDBCu);
    ctx->pc = 0x34FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDB4u;
    // 0x34fdb8: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x34FDB4u, 0x34FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FDBCu;
label_34fdbc:
    // 0x34fdbc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x34fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x34fdc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34fdc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34fdc4: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x34fdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x34fdc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34fdcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34fdd0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34fdd4: 0x2442c880  addiu       $v0, $v0, -0x3780
    ctx->pc = 0x34fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x34fdd8: 0x2463c888  addiu       $v1, $v1, -0x3778
    ctx->pc = 0x34fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953096));
    // 0x34fddc: 0x2484c890  addiu       $a0, $a0, -0x3770
    ctx->pc = 0x34fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953104));
    // 0x34fde0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x34fde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x34fde4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x34fde4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x34fde8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x34fde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34fdec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x34FDECu;
    {
        const bool branch_taken_0x34fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDECu;
        // 0x34fdf0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fdec) {
            ctx->pc = 0x34FEDCu;
            goto label_34fedc;
        }
    }
    ctx->pc = 0x34FDF4u;
label_34fdf4:
    // 0x34fdf4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x34fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x34fdf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34fdfc: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x34fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x34fe00: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x34fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x34fe04: 0x8ca401c0  lw          $a0, 0x1C0($a1)
    ctx->pc = 0x34fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF410u));
    // 0x34fe08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe0c: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x34fe0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6BCA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA8Cu, _value); } while (0);
    // 0x34fe10: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x34FE10u;
    SET_GPR_U32(ctx, 31, 0x34FE18u);
    ctx->pc = 0x34FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE10u;
    // 0x34fe14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x34FE10u, 0x34FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE18u;
label_34fe18:
    // 0x34fe18: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x34fe1c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x34fe1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x34fe20: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x34fe20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x34fe24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34fe28: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34fe2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34fe30: 0x2442c898  addiu       $v0, $v0, -0x3768
    ctx->pc = 0x34fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953112));
    // 0x34fe34: 0x2463c8a0  addiu       $v1, $v1, -0x3760
    ctx->pc = 0x34fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953120));
    // 0x34fe38: 0x2484c8a8  addiu       $a0, $a0, -0x3758
    ctx->pc = 0x34fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953128));
    // 0x34fe3c: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x34fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x34fe40: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x34fe40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x34fe44: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x34fe44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34fe48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x34FE48u;
    {
        const bool branch_taken_0x34fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE48u;
        // 0x34fe4c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe48) {
            ctx->pc = 0x34FEDCu;
            goto label_34fedc;
        }
    }
    ctx->pc = 0x34FE50u;
label_34fe50:
    // 0x34fe50: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x34fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x34fe54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34fe58: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x34fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x34fe5c: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x34fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x34fe60: 0x8c6401c4  lw          $a0, 0x1C4($v1)
    ctx->pc = 0x34fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF414u));
    // 0x34fe64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe70: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x34FE70u;
    SET_GPR_U32(ctx, 31, 0x34FE78u);
    ctx->pc = 0x34FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE70u;
    // 0x34fe74: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x34FE70u, 0x34FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE78u;
label_34fe78:
    // 0x34fe78: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x34fe78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x34fe7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34fe7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34fe80: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x34fe80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34fe84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34FE84u;
    {
        const bool branch_taken_0x34fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE84u;
        // 0x34fe88: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe84) {
            ctx->pc = 0x34FEC0u;
            goto label_34fec0;
        }
    }
    ctx->pc = 0x34FE8Cu;
label_34fe8c:
    // 0x34fe8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34fe90: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x34fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x34fe94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe98: 0x8ca401c8  lw          $a0, 0x1C8($a1)
    ctx->pc = 0x34fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 456)));
    // 0x34fe9c: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x34fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x34fea0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x34fea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BCA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA8Cu, _value); } while (0);
    // 0x34fea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fea8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x34fea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x34feac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34feacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34feb0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x34feb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34feb4: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x34FEB4u;
    SET_GPR_U32(ctx, 31, 0x34FEBCu);
    ctx->pc = 0x34FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEB4u;
    // 0x34feb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x34FEB4u, 0x34FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FEBCu;
label_34febc:
    // 0x34febc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_34fec0:
    // 0x34fec0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34fec4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34fec8: 0x2442c868  addiu       $v0, $v0, -0x3798
    ctx->pc = 0x34fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953064));
    // 0x34fecc: 0x2463c870  addiu       $v1, $v1, -0x3790
    ctx->pc = 0x34feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953072));
    // 0x34fed0: 0x2484c878  addiu       $a0, $a0, -0x3788
    ctx->pc = 0x34fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953080));
    // 0x34fed4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x34fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x34fed8: 0x4600df86  mov.s       $f30, $f27
    ctx->pc = 0x34fed8u;
    ctx->f[30] = FPU_MOV_S(ctx->f[27]);
label_34fedc:
    // 0x34fedc: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x34fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x34fee0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34FEE0u;
    {
        const bool branch_taken_0x34fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEE0u;
        // 0x34fee4: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fee0) {
            ctx->pc = 0x34FEFCu;
            goto label_34fefc;
        }
    }
    ctx->pc = 0x34FEE8u;
label_34fee8:
    // 0x34fee8: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x34fee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34feec: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x34feecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x34fef0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x34fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x34fef4: 0x4600df86  mov.s       $f30, $f27
    ctx->pc = 0x34fef4u;
    ctx->f[30] = FPU_MOV_S(ctx->f[27]);
    // 0x34fef8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x34fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_34fefc:
    // 0x34fefc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x34fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34ff00: 0x101cc0  sll         $v1, $s0, 19
    ctx->pc = 0x34ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 19));
    // 0x34ff04: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x34ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x34ff08: 0x38c03  sra         $s1, $v1, 16
    ctx->pc = 0x34ff08u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
    // 0x34ff0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34ff10: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x34ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ff14: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x34FF14u;
    {
        const bool branch_taken_0x34ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF14u;
        // 0x34ff18: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff14) {
            ctx->pc = 0x350248u;
            goto label_350248;
        }
    }
    ctx->pc = 0x34FF1Cu;
    // 0x34ff1c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x34ff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x34ff20: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34ff20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34ff24: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x34ff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x34ff28: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x34ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x34ff2c: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x34ff2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x34ff30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ff30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ff34: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x34ff34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x34ff38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34ff3c: 0x0  nop
    ctx->pc = 0x34ff3cu;
    // NOP
label_34ff40:
    // 0x34ff40: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x34ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x34ff44: 0x2463e148  addiu       $v1, $v1, -0x1EB8
    ctx->pc = 0x34ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959432));
    // 0x34ff48: 0x600013  mtlo        $v1
    ctx->pc = 0x34ff48u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x34ff4c: 0x72228000  madd        $s0, $s1, $v0
    ctx->pc = 0x34ff4cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x34ff50: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x34ff50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34ff54: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x34FF54u;
    {
        const bool branch_taken_0x34ff54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF54u;
        // 0x34ff58: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff54) {
            ctx->pc = 0x35022Cu;
            goto label_35022c;
        }
    }
    ctx->pc = 0x34FF5Cu;
    // 0x34ff5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ff60: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FF60u;
    {
        const bool branch_taken_0x34ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF60u;
        // 0x34ff64: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff60) {
            ctx->pc = 0x34FF78u;
            goto label_34ff78;
        }
    }
    ctx->pc = 0x34FF68u;
    // 0x34ff68: 0xc61a0000  lwc1        $f26, 0x0($s0)
    ctx->pc = 0x34ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34ff6c: 0xc6180004  lwc1        $f24, 0x4($s0)
    ctx->pc = 0x34ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34ff70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34FF70u;
    {
        const bool branch_taken_0x34ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF70u;
        // 0x34ff74: 0xc6190008  lwc1        $f25, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff70) {
            ctx->pc = 0x34FF84u;
            goto label_34ff84;
        }
    }
    ctx->pc = 0x34FF78u;
label_34ff78:
    // 0x34ff78: 0xc61a000c  lwc1        $f26, 0xC($s0)
    ctx->pc = 0x34ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34ff7c: 0xc6180010  lwc1        $f24, 0x10($s0)
    ctx->pc = 0x34ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34ff80: 0xc6190014  lwc1        $f25, 0x14($s0)
    ctx->pc = 0x34ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_34ff84:
    // 0x34ff84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34ff88: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x34ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x34ff8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34ff8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34ff90: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x34ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34ff94: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x34ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x34ff98: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x34ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ff9c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x34ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ffa0: 0x4601c841  sub.s       $f1, $f25, $f1
    ctx->pc = 0x34ffa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x34ffa4: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x34ffa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x34ffa8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34ffa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34ffac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34ffacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34ffb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34ffb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ffb4: 0x0  nop
    ctx->pc = 0x34ffb4u;
    // NOP
    // 0x34ffb8: 0x0  nop
    ctx->pc = 0x34ffb8u;
    // NOP
    // 0x34ffbc: 0x46000004  c1          0x4
    ctx->pc = 0x34ffbcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34ffc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34ffc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ffc4: 0x0  nop
    ctx->pc = 0x34ffc4u;
    // NOP
    // 0x34ffc8: 0x45000098  bc1f        . + 4 + (0x98 << 2)
    ctx->pc = 0x34FFC8u;
    {
        const bool branch_taken_0x34ffc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFC8u;
        // 0x34ffcc: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffc8) {
            ctx->pc = 0x35022Cu;
            goto label_35022c;
        }
    }
    ctx->pc = 0x34FFD0u;
    // 0x34ffd0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x34ffd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x34ffd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34ffd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ffd8: 0x0  nop
    ctx->pc = 0x34ffd8u;
    // NOP
    // 0x34ffdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34ffdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ffe0: 0x0  nop
    ctx->pc = 0x34ffe0u;
    // NOP
    // 0x34ffe4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x34FFE4u;
    {
        const bool branch_taken_0x34ffe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFE4u;
        // 0x34ffe8: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffe4) {
            ctx->pc = 0x350028u;
            goto label_350028;
        }
    }
    ctx->pc = 0x34FFECu;
    // 0x34ffec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x34ffecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x34fff0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34fff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34fff4: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x34fff4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34fff8: 0x0  nop
    ctx->pc = 0x34fff8u;
    // NOP
    // 0x34fffc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34fffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x350000: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x350004: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x350004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x350008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35000c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35000cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x350010: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x350010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x350014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350018: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x350018u;
    SET_GPR_U32(ctx, 31, 0x350020u);
    ctx->pc = 0x35001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350018u;
    // 0x35001c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x350018u, 0x350020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350020u;
label_350020:
    // 0x350020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x350020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350024: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x350024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_350028:
    // 0x350028: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x350028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x35002c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x35002cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x350030: 0x0  nop
    ctx->pc = 0x350030u;
    // NOP
    // 0x350034: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x350034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x350038: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x350038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x35003c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x35003cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x350040: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x350040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x350044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350048: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x350048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35004c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35004cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x350050: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x350050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x350054: 0x8c642cf8  lw          $a0, 0x2CF8($v1)
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CF8u));
    // 0x350058: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x350058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x35005c: 0x0  nop
    ctx->pc = 0x35005cu;
    // NOP
    // 0x350060: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x350060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x350064: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x350064u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x350068: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x350068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35006c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x35006cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x350070: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x350070u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x350074: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x350074u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x350078: 0x461fa500  add.s       $f20, $f20, $f31
    ctx->pc = 0x350078u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[31]);
    // 0x35007c: 0x49202  srl         $s2, $a0, 8
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x350080: 0x461fad40  add.s       $f21, $f21, $f31
    ctx->pc = 0x350080u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[31]);
    // 0x350084: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x350084u;
    SET_GPR_U32(ctx, 31, 0x35008Cu);
    ctx->pc = 0x350088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350084u;
    // 0x350088: 0x4614f502  mul.s       $f20, $f30, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[30], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x350084u, 0x35008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35008Cu;
label_35008c:
    // 0x35008c: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x35008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x350090: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x350090u;
    SET_GPR_U32(ctx, 31, 0x350098u);
    ctx->pc = 0x350094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350090u;
    // 0x350094: 0x4600a5c2  mul.s       $f23, $f20, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x350090u, 0x350098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350098u;
label_350098:
    // 0x350098: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x350098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35009c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x35009Cu;
    SET_GPR_U32(ctx, 31, 0x3500A4u);
    ctx->pc = 0x3500A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35009Cu;
    // 0x3500a0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x35009Cu, 0x3500A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500A4u;
label_3500a4:
    // 0x3500a4: 0x4615dd82  mul.s       $f22, $f27, $f21
    ctx->pc = 0x3500a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[27], ctx->f[21]);
    // 0x3500a8: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x3500a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3500ac: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x3500ACu;
    SET_GPR_U32(ctx, 31, 0x3500B4u);
    ctx->pc = 0x3500B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500ACu;
    // 0x3500b0: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x3500ACu, 0x3500B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500B4u;
label_3500b4:
    // 0x3500b4: 0x4600d847  neg.s       $f1, $f27
    ctx->pc = 0x3500b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[27]);
    // 0x3500b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3500b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3500bc: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x3500bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x3500c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x3500c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3500c4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3500c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3500c8: 0x4617d141  sub.s       $f5, $f26, $f23
    ctx->pc = 0x3500c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[23]);
    // 0x3500cc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3500ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3500d0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3500d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3500d4: 0x4614c981  sub.s       $f6, $f25, $f20
    ctx->pc = 0x3500d4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
    // 0x3500d8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x3500d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3500dc: 0x4617d5c0  add.s       $f23, $f26, $f23
    ctx->pc = 0x3500dcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[26], ctx->f[23]);
    // 0x3500e0: 0x27be000c  addiu       $fp, $sp, 0xC
    ctx->pc = 0x3500e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x3500e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3500e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3500e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3500ec: 0x4614cd00  add.s       $f20, $f25, $f20
    ctx->pc = 0x3500ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[20]);
    // 0x3500f0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3500f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3500f4: 0x46162801  sub.s       $f0, $f5, $f22
    ctx->pc = 0x3500f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[22]);
    // 0x3500f8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3500f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3500fc: 0x4616b881  sub.s       $f2, $f23, $f22
    ctx->pc = 0x3500fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x350100: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x350100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x350104: 0x460130c1  sub.s       $f3, $f6, $f1
    ctx->pc = 0x350104u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x350108: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x350108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x35010c: 0x4601a101  sub.s       $f4, $f20, $f1
    ctx->pc = 0x35010cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x350110: 0xe7b80058  swc1        $f24, 0x58($sp)
    ctx->pc = 0x350110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x350114: 0x4616bdc0  add.s       $f23, $f23, $f22
    ctx->pc = 0x350114u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x350118: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x350118u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35011c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x35011cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x350120: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x350120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x350124: 0x46162940  add.s       $f5, $f5, $f22
    ctx->pc = 0x350124u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[22]);
    // 0x350128: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x350128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35012c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x35012cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x350130: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x350130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x350134: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x350134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x350138: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x350138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35013c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x35013cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x350140: 0x2450c858  addiu       $s0, $v0, -0x37A8
    ctx->pc = 0x350140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
    // 0x350144: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x350144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x350148: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x350148u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35014c: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x35014cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x350150: 0x27b60014  addiu       $s6, $sp, 0x14
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x350154: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x350154u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x350158: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x350158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35015c: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x35015cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x350160: 0xa3a60009  sb          $a2, 0x9($sp)
    ctx->pc = 0x350160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x350164: 0xa3a5000a  sb          $a1, 0xA($sp)
    ctx->pc = 0x350164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x350168: 0xa3a4000b  sb          $a0, 0xB($sp)
    ctx->pc = 0x350168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x35016c: 0xe7bd0000  swc1        $f29, 0x0($sp)
    ctx->pc = 0x35016cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x350170: 0xe7bd0004  swc1        $f29, 0x4($sp)
    ctx->pc = 0x350170u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x350174: 0xe7b80028  swc1        $f24, 0x28($sp)
    ctx->pc = 0x350174u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x350178: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x350178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x35017c: 0xa3a60021  sb          $a2, 0x21($sp)
    ctx->pc = 0x35017cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x350180: 0xa3a50022  sb          $a1, 0x22($sp)
    ctx->pc = 0x350180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 5));
    // 0x350184: 0xa3a40023  sb          $a0, 0x23($sp)
    ctx->pc = 0x350184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x350188: 0xe7bc0018  swc1        $f28, 0x18($sp)
    ctx->pc = 0x350188u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35018c: 0xe7bd001c  swc1        $f29, 0x1C($sp)
    ctx->pc = 0x35018cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x350190: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x350190u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x350194: 0xa3a30038  sb          $v1, 0x38($sp)
    ctx->pc = 0x350194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x350198: 0xa3a60039  sb          $a2, 0x39($sp)
    ctx->pc = 0x350198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 6));
    // 0x35019c: 0xa3a5003a  sb          $a1, 0x3A($sp)
    ctx->pc = 0x35019cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 5));
    // 0x3501a0: 0xa3a4003b  sb          $a0, 0x3B($sp)
    ctx->pc = 0x3501a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 59), (uint8_t)GPR_U32(ctx, 4));
    // 0x3501a4: 0xe7bd0030  swc1        $f29, 0x30($sp)
    ctx->pc = 0x3501a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3501a8: 0xe7bc0034  swc1        $f28, 0x34($sp)
    ctx->pc = 0x3501a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3501ac: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x3501acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x3501b0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3501b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3501b4: 0xa3a60051  sb          $a2, 0x51($sp)
    ctx->pc = 0x3501b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 6));
    // 0x3501b8: 0xa3a50052  sb          $a1, 0x52($sp)
    ctx->pc = 0x3501b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 5));
    // 0x3501bc: 0xa3a40053  sb          $a0, 0x53($sp)
    ctx->pc = 0x3501bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 4));
    // 0x3501c0: 0xe7bc0048  swc1        $f28, 0x48($sp)
    ctx->pc = 0x3501c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3501c4: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x3501c4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3501c8:
    // 0x3501c8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3501c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3501cc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3501d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3501d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3501d4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3501d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3501d8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3501d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3501dc: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x3501dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3501e0: 0x3c22021  addu        $a0, $fp, $v0
    ctx->pc = 0x3501e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x3501e4: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x3501e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3501e8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3501ec: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x3501ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3501f0: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x3501f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3501f4: 0xc4d00000  lwc1        $f16, 0x0($a2)
    ctx->pc = 0x3501f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x3501f8: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x3501f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3501fc: 0x90640008  lbu         $a0, 0x8($v1)
    ctx->pc = 0x3501fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x350200: 0x9067000b  lbu         $a3, 0xB($v1)
    ctx->pc = 0x350200u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x350204: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x350204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x350208: 0x90650009  lbu         $a1, 0x9($v1)
    ctx->pc = 0x350208u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x35020c: 0xc0daaf0  jal         func_36ABC0
    ctx->pc = 0x35020Cu;
    SET_GPR_U32(ctx, 31, 0x350214u);
    ctx->pc = 0x350210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35020Cu;
    // 0x350210: 0x9066000a  lbu         $a2, 0xA($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABC0u, 0x35020Cu, 0x350214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350214u;
label_350214:
    // 0x350214: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x350214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350218: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x350218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x35021c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35021cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x350220: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x350220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x350224: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x350224u;
    {
        const bool branch_taken_0x350224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350224u;
        // 0x350228: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350224) {
            ctx->pc = 0x3501C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3501c8;
        }
    }
    ctx->pc = 0x35022Cu;
label_35022c:
    // 0x35022c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x35022cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x350230: 0x141c00  sll         $v1, $s4, 16
    ctx->pc = 0x350230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x350234: 0x38c03  sra         $s1, $v1, 16
    ctx->pc = 0x350234u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
    // 0x350238: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x350238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35023c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x35023cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350240: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x350240u;
    {
        const bool branch_taken_0x350240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350240u;
        // 0x350244: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350240) {
            ctx->pc = 0x34FF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ff40;
        }
    }
    ctx->pc = 0x350248u;
label_350248:
    // 0x350248: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x350248u;
    SET_GPR_U32(ctx, 31, 0x350250u);
    ctx->pc = 0x35024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350248u;
    // 0x35024c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x350248u, 0x350250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350250u;
label_350250:
    // 0x350250: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x350250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x350254: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x350258: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x350258u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35025c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x35025cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x350260: 0x1460febf  bnez        $v1, . + 4 + (-0x141 << 2)
    ctx->pc = 0x350260u;
    {
        const bool branch_taken_0x350260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350260u;
        // 0x350264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350260) {
            ctx->pc = 0x34FD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fd60;
        }
    }
    ctx->pc = 0x350268u;
    // 0x350268: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x350268u;
    SET_GPR_U32(ctx, 31, 0x350270u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x350268u, 0x350270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350270u;
label_350270:
    // 0x350270: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x350270u;
    SET_GPR_U32(ctx, 31, 0x350278u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x350270u, 0x350278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350278u;
label_350278:
    // 0x350278: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x350278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35027c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x35027cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350280: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x350280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x350284: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x350284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x350288: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x350288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35028c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x35028cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x350290: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x350290u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x350294: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x350294u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x350298: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x350298u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35029c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x35029cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3502a0: 0xc7bf0128  lwc1        $f31, 0x128($sp)
    ctx->pc = 0x3502a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x3502a4: 0xc7be0120  lwc1        $f30, 0x120($sp)
    ctx->pc = 0x3502a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x3502a8: 0xc7bd0118  lwc1        $f29, 0x118($sp)
    ctx->pc = 0x3502a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x3502ac: 0xc7bc0110  lwc1        $f28, 0x110($sp)
    ctx->pc = 0x3502acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x3502b0: 0xc7bb0108  lwc1        $f27, 0x108($sp)
    ctx->pc = 0x3502b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3502b4: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x3502b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3502b8: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x3502b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3502bc: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x3502bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3502c0: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x3502c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3502c4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x3502c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3502c8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3502c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3502cc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3502ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3502d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3502D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3502D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502D0u;
        // 0x3502d4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3502D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3502D8u;
}
