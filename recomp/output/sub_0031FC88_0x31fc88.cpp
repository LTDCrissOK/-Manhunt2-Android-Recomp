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

// Function: sub_0031FC88
// Address: 0x31fc88 - 0x3201a0
void sub_0031FC88_0x31fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FC88_0x31fc88");
#endif

    switch (ctx->pc) {
        case 0x31fcdcu: goto label_31fcdc;
        case 0x31fd20u: goto label_31fd20;
        case 0x31fd68u: goto label_31fd68;
        case 0x31fdb0u: goto label_31fdb0;
        case 0x31fed8u: goto label_31fed8;
        case 0x31ff04u: goto label_31ff04;
        case 0x31ff30u: goto label_31ff30;
        case 0x31ff88u: goto label_31ff88;
        case 0x31ffc0u: goto label_31ffc0;
        case 0x320068u: goto label_320068;
        case 0x320138u: goto label_320138;
        default: break;
    }

    ctx->pc = 0x31fc88u;

    // 0x31fc88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31fc8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fc90: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31fc94: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x31fc94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x31fc98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31fc9c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x31fca0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x31fca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31fca4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31fca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fca8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31fcac: 0x24512840  addiu       $s1, $v0, 0x2840
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x31fcb0: 0xa066bb84  sb          $a2, -0x447C($v1)
    ctx->pc = 0x31fcb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3FBB84u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBB84u, _value); } while (0);
    // 0x31fcb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31fcb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31fcb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31fcbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31fcc0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31fcc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31fcc8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31fccc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31fcd0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31fcd4: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x31FCD4u;
    SET_GPR_U32(ctx, 31, 0x31FCDCu);
    ctx->pc = 0x31FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCD4u;
    // 0x31fcd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x31FCD4u, 0x31FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCDCu;
label_31fcdc:
    // 0x31fcdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fce0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x31fce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FCE4u;
    {
        const bool branch_taken_0x31fce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCE4u;
        // 0x31fce8: 0xac62bdc0  sw          $v0, -0x4240($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fce4) {
            ctx->pc = 0x31FCF4u;
            goto label_31fcf4;
        }
    }
    ctx->pc = 0x31FCECu;
    // 0x31fcec: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x31FCECu;
    {
        const bool branch_taken_0x31fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCECu;
        // 0x31fcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcec) {
            ctx->pc = 0x32016Cu;
            goto label_32016c;
        }
    }
    ctx->pc = 0x31FCF4u;
label_31fcf4:
    // 0x31fcf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31fcf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fcfc: 0xae2219bc  sw          $v0, 0x19BC($s1)
    ctx->pc = 0x31fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6588), GPR_U32(ctx, 2));
    // 0x31fd00: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x31fd00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd04: 0xe6340018  swc1        $f20, 0x18($s1)
    ctx->pc = 0x31fd04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x31fd08: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x31fd0c: 0xac60bdc8  sw          $zero, -0x4238($v1)
    ctx->pc = 0x31fd0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC8u, _value); } while (0);
    // 0x31fd10: 0xae2019b8  sw          $zero, 0x19B8($s1)
    ctx->pc = 0x31fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6584), GPR_U32(ctx, 0));
    // 0x31fd14: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x31fd18: 0xae2019b4  sw          $zero, 0x19B4($s1)
    ctx->pc = 0x31fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6580), GPR_U32(ctx, 0));
    // 0x31fd1c: 0xae2019c0  sw          $zero, 0x19C0($s1)
    ctx->pc = 0x31fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6592), GPR_U32(ctx, 0));
label_31fd20:
    // 0x31fd20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31fd24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fd28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31fd2c: 0x0  nop
    ctx->pc = 0x31fd2cu;
    // NOP
    // 0x31fd30: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31FD30u;
    {
        const bool branch_taken_0x31fd30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x31FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD30u;
        // 0x31fd34: 0x244200a4  addiu       $v0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd30) {
            ctx->pc = 0x31FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FD38u;
    // 0x31fd38: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x31fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fd3c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31fd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fd40: 0x8ec3bdc0  lw          $v1, -0x4240($s6)
    ctx->pc = 0x31fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950336)));
    // 0x31fd44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31fd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd48: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x31fd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x31fd4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x31fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31fd50: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x31FD50u;
    {
        const bool branch_taken_0x31fd50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD50u;
        // 0x31fd54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd50) {
            ctx->pc = 0x31FEB8u;
            goto label_31feb8;
        }
    }
    ctx->pc = 0x31FD58u;
    // 0x31fd58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31fd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31fd5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31fd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31fd60: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x31fd60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31fd64: 0x0  nop
    ctx->pc = 0x31fd64u;
    // NOP
label_31fd68:
    // 0x31fd68: 0x8e2319b8  lw          $v1, 0x19B8($s1)
    ctx->pc = 0x31fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
    // 0x31fd6c: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x31fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x31fd70: 0x8ca5bdc0  lw          $a1, -0x4240($a1)
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950336)));
    // 0x31fd74: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x31fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x31fd78: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31fd78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31fd7c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x31fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x31fd80: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x31fd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31fd84: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x31fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x31fd88: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FD88u;
    {
        const bool branch_taken_0x31fd88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD88u;
        // 0x31fd8c: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd88) {
            ctx->pc = 0x31FDA0u;
            goto label_31fda0;
        }
    }
    ctx->pc = 0x31FD90u;
    // 0x31fd90: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x31fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fd94: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x31fd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fd98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31fd98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31fd9c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x31fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_31fda0:
    // 0x31fda0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fda4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31fda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fda8: 0xc0c7e2c  jal         func_31F8B0
    ctx->pc = 0x31FDA8u;
    SET_GPR_U32(ctx, 31, 0x31FDB0u);
    ctx->pc = 0x31FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDA8u;
    // 0x31fdac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F8B0u, 0x31FDA8u, 0x31FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDB0u;
label_31fdb0:
    // 0x31fdb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fdb4: 0x8c63bdcc  lw          $v1, -0x4234($v1)
    ctx->pc = 0x31fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBDCCu));
    // 0x31fdb8: 0x50750011  beql        $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x31FDB8u;
    {
        const bool branch_taken_0x31fdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x31fdb8) {
            ctx->pc = 0x31FDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FDB8u;
            // 0x31fdbc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FE00u;
            goto label_31fe00;
        }
    }
    ctx->pc = 0x31FDC0u;
    // 0x31fdc0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31FDC0u;
    {
        const bool branch_taken_0x31fdc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDC0u;
        // 0x31fdc4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdc0) {
            ctx->pc = 0x31FE00u;
            goto label_31fe00;
        }
    }
    ctx->pc = 0x31FDC8u;
    // 0x31fdc8: 0x8e2419b8  lw          $a0, 0x19B8($s1)
    ctx->pc = 0x31fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
    // 0x31fdcc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FDCCu;
    {
        const bool branch_taken_0x31fdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x31FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDCCu;
        // 0x31fdd0: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdcc) {
            ctx->pc = 0x31FDDCu;
            goto label_31fddc;
        }
    }
    ctx->pc = 0x31FDD4u;
    // 0x31fdd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31FDD4u;
    {
        const bool branch_taken_0x31fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD4u;
        // 0x31fdd8: 0xc6400030  lwc1        $f0, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdd4) {
            ctx->pc = 0x31FDF8u;
            goto label_31fdf8;
        }
    }
    ctx->pc = 0x31FDDCu;
label_31fddc:
    // 0x31fddc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FDDCu;
    {
        const bool branch_taken_0x31fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x31fddc) {
            ctx->pc = 0x31FDECu;
            goto label_31fdec;
        }
    }
    ctx->pc = 0x31FDE4u;
    // 0x31fde4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDE4u;
    {
        const bool branch_taken_0x31fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDE4u;
        // 0x31fde8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fde4) {
            ctx->pc = 0x31FE00u;
            goto label_31fe00;
        }
    }
    ctx->pc = 0x31FDECu;
label_31fdec:
    // 0x31fdec: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x31fdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x31fdf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31fdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31fdf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31fdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31fdf8:
    // 0x31fdf8: 0x0  nop
    ctx->pc = 0x31fdf8u;
    // NOP
    // 0x31fdfc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x31fdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31fe00:
    // 0x31fe00: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x31fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fe04: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x31fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fe08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31fe08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fe0c: 0x0  nop
    ctx->pc = 0x31fe0cu;
    // NOP
    // 0x31fe10: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x31FE10u;
    {
        const bool branch_taken_0x31fe10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE10u;
        // 0x31fe14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe10) {
            ctx->pc = 0x31FE40u;
            goto label_31fe40;
        }
    }
    ctx->pc = 0x31FE18u;
    // 0x31fe18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31fe1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31fe20: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x31fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x31fe24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fe28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x31fe30: 0x8e2219b4  lw          $v0, 0x19B4($s1)
    ctx->pc = 0x31fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6580)));
    // 0x31fe34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31fe38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE38u;
    {
        const bool branch_taken_0x31fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE38u;
        // 0x31fe3c: 0xae2219b4  sw          $v0, 0x19B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe38) {
            ctx->pc = 0x31FE4Cu;
            goto label_31fe4c;
        }
    }
    ctx->pc = 0x31FE40u;
label_31fe40:
    // 0x31fe40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31fe44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31fe48: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x31fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
label_31fe4c:
    // 0x31fe4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fe50: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31fe54: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x31fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x31fe58: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x31fe58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x31fe5c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x31FE5Cu;
    {
        const bool branch_taken_0x31fe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe5c) {
            ctx->pc = 0x31FE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FE5Cu;
            // 0x31fe60: 0x8ec3bdc0  lw          $v1, -0x4240($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FEA4u;
            goto label_31fea4;
        }
    }
    ctx->pc = 0x31FE64u;
    // 0x31fe64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fe68: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31FE68u;
    {
        const bool branch_taken_0x31fe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fe68) {
            ctx->pc = 0x31FE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FE68u;
            // 0x31fe6c: 0x8e2219b8  lw          $v0, 0x19B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FE94u;
            goto label_31fe94;
        }
    }
    ctx->pc = 0x31FE70u;
    // 0x31fe70: 0x8e2219c0  lw          $v0, 0x19C0($s1)
    ctx->pc = 0x31fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x31fe74: 0x8e2419b8  lw          $a0, 0x19B8($s1)
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
    // 0x31fe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31fe7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31fe80: 0xac441918  sw          $a0, 0x1918($v0)
    ctx->pc = 0x31fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6424), GPR_U32(ctx, 4));
    // 0x31fe84: 0x8e2319c0  lw          $v1, 0x19C0($s1)
    ctx->pc = 0x31fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x31fe88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe8c: 0xae2319c0  sw          $v1, 0x19C0($s1)
    ctx->pc = 0x31fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6592), GPR_U32(ctx, 3));
    // 0x31fe90: 0x8e2219b8  lw          $v0, 0x19B8($s1)
    ctx->pc = 0x31fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
label_31fe94:
    // 0x31fe94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31fe94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31fe9c: 0xae2219b8  sw          $v0, 0x19B8($s1)
    ctx->pc = 0x31fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6584), GPR_U32(ctx, 2));
    // 0x31fea0: 0x8ec3bdc0  lw          $v1, -0x4240($s6)
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950336)));
label_31fea4:
    // 0x31fea4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31fea8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x31fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31feac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31feacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31feb0: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x31FEB0u;
    {
        const bool branch_taken_0x31feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEB0u;
        // 0x31feb4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31feb0) {
            ctx->pc = 0x31FD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fd68;
        }
    }
    ctx->pc = 0x31FEB8u;
label_31feb8:
    // 0x31feb8: 0x8e2219b4  lw          $v0, 0x19B4($s1)
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6580)));
    // 0x31febc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31FEBCu;
    {
        const bool branch_taken_0x31febc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEBCu;
        // 0x31fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31febc) {
            ctx->pc = 0x31FF04u;
            goto label_31ff04;
        }
    }
    ctx->pc = 0x31FEC4u;
    // 0x31fec4: 0x8e2219c0  lw          $v0, 0x19C0($s1)
    ctx->pc = 0x31fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x31fec8: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31FEC8u;
    {
        const bool branch_taken_0x31fec8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31fec8) {
            ctx->pc = 0x31FECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEC8u;
            // 0x31fecc: 0x8e2219b8  lw          $v0, 0x19B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF14u;
            goto label_31ff14;
        }
    }
    ctx->pc = 0x31FED0u;
    // 0x31fed0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x31FED0u;
    SET_GPR_U32(ctx, 31, 0x31FED8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x31FED0u, 0x31FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FED8u;
label_31fed8:
    // 0x31fed8: 0x8e2419c0  lw          $a0, 0x19C0($s1)
    ctx->pc = 0x31fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x31fedc: 0x262e0020  addiu       $t6, $s1, 0x20
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31fee0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31fee0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31fee4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31FEE4u;
    {
        const bool branch_taken_0x31fee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fee4) {
            ctx->pc = 0x31FEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEE4u;
            // 0x31fee8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FEECu;
            goto label_31feec;
        }
    }
    ctx->pc = 0x31FEECu;
label_31feec:
    // 0x31feec: 0x1810  mfhi        $v1
    ctx->pc = 0x31feecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31fef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31fef4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31fef8: 0x8c621918  lw          $v0, 0x1918($v1)
    ctx->pc = 0x31fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6424)));
    // 0x31fefc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31FEFCu;
    {
        const bool branch_taken_0x31fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEFCu;
        // 0x31ff00: 0xae2219bc  sw          $v0, 0x19BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fefc) {
            ctx->pc = 0x320034u;
            goto label_320034;
        }
    }
    ctx->pc = 0x31FF04u;
label_31ff04:
    // 0x31ff04: 0xaec0bdc0  sw          $zero, -0x4240($s6)
    ctx->pc = 0x31ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294950336), GPR_U32(ctx, 0));
    // 0x31ff08: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x31ff08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ff0c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x31FF0Cu;
    {
        const bool branch_taken_0x31ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF0Cu;
        // 0x31ff10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff0c) {
            ctx->pc = 0x32016Cu;
            goto label_32016c;
        }
    }
    ctx->pc = 0x31FF14u;
label_31ff14:
    // 0x31ff14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ff14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff1c: 0x262e0020  addiu       $t6, $s1, 0x20
    ctx->pc = 0x31ff1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31ff20: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31FF20u;
    {
        const bool branch_taken_0x31ff20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF20u;
        // 0x31ff24: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff20) {
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FF28u;
    // 0x31ff28: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x31ff28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff2c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_31ff30:
    // 0x31ff30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31ff34: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x31ff34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31ff38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x31FF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF38u;
            // 0x31ff3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF4Cu;
            goto label_31ff4c;
        }
    }
    ctx->pc = 0x31FF40u;
    // 0x31ff40: 0xae2419bc  sw          $a0, 0x19BC($s1)
    ctx->pc = 0x31ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6588), GPR_U32(ctx, 4));
    // 0x31ff44: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31ff44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31ff4c:
    // 0x31ff4c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x31ff4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31ff50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31FF50u;
    {
        const bool branch_taken_0x31ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF50u;
        // 0x31ff54: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff50) {
            ctx->pc = 0x31FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff30;
        }
    }
    ctx->pc = 0x31FF58u;
label_31ff58:
    // 0x31ff58: 0x8e2419bc  lw          $a0, 0x19BC($s1)
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
    // 0x31ff5c: 0x240200a4  addiu       $v0, $zero, 0xA4
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x31ff60: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x31ff60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31ff64: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x31ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x31ff68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ff6c: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x31FF6Cu;
    {
        const bool branch_taken_0x31ff6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF6Cu;
        // 0x31ff70: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff6c) {
            ctx->pc = 0x320034u;
            goto label_320034;
        }
    }
    ctx->pc = 0x31FF74u;
    // 0x31ff74: 0x240f00a4  addiu       $t7, $zero, 0xA4
    ctx->pc = 0x31ff74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x31ff78: 0x26280024  addiu       $t0, $s1, 0x24
    ctx->pc = 0x31ff78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x31ff7c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x31ff7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ff80: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x31ff80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31ff84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ff88:
    // 0x31ff88: 0x8f1818  mult        $v1, $a0, $t7
    ctx->pc = 0x31ff88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31ff8c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x31ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x31ff90: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x31ff94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ff98: 0x5472001f  bnel        $v1, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x31FF98u;
    {
        const bool branch_taken_0x31ff98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x31ff98) {
            ctx->pc = 0x31FF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF98u;
            // 0x31ff9c: 0x8e2419bc  lw          $a0, 0x19BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320018u;
            goto label_320018;
        }
    }
    ctx->pc = 0x31FFA0u;
    // 0x31ffa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ffa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffa4: 0x19600019  blez        $t3, . + 4 + (0x19 << 2)
    ctx->pc = 0x31FFA4u;
    {
        const bool branch_taken_0x31ffa4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x31FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFA4u;
        // 0x31ffa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffa4) {
            ctx->pc = 0x32000Cu;
            goto label_32000c;
        }
    }
    ctx->pc = 0x31FFACu;
    // 0x31ffac: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x31ffacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffb0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x31ffb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffb4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x31ffb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ffb8: 0x8e2419bc  lw          $a0, 0x19BC($s1)
    ctx->pc = 0x31ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
    // 0x31ffbc: 0x0  nop
    ctx->pc = 0x31ffbcu;
    // NOP
label_31ffc0:
    // 0x31ffc0: 0x10c4000c  beq         $a2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x31FFC0u;
    {
        const bool branch_taken_0x31ffc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x31FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFC0u;
        // 0x31ffc4: 0x240500a4  addiu       $a1, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffc0) {
            ctx->pc = 0x31FFF4u;
            goto label_31fff4;
        }
    }
    ctx->pc = 0x31FFC8u;
    // 0x31ffc8: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x31ffc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31ffcc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x31ffd0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x31ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x31ffd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ffd8: 0x506d0007  beql        $v1, $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x31FFD8u;
    {
        const bool branch_taken_0x31ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x31ffd8) {
            ctx->pc = 0x31FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FFD8u;
            // 0x31ffdc: 0x8e2219b8  lw          $v0, 0x19B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FFF8u;
            goto label_31fff8;
        }
    }
    ctx->pc = 0x31FFE0u;
    // 0x31ffe0: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x31ffe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31ffe4: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x31ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x31ffe8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x31ffec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x31fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_31fff4:
    // 0x31fff4: 0x8e2219b8  lw          $v0, 0x19B8($s1)
    ctx->pc = 0x31fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6584)));
label_31fff8:
    // 0x31fff8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31fffc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x31fffcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320000: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x320000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x320004: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x320004u;
    {
        const bool branch_taken_0x320004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320004) {
            ctx->pc = 0x320008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320004u;
            // 0x320008: 0x8e2419bc  lw          $a0, 0x19BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ffc0;
        }
    }
    ctx->pc = 0x32000Cu;
label_32000c:
    // 0x32000c: 0x10e0ffbd  beqz        $a3, . + 4 + (-0x43 << 2)
    ctx->pc = 0x32000Cu;
    {
        const bool branch_taken_0x32000c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x320010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32000Cu;
        // 0x320010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32000c) {
            ctx->pc = 0x31FF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff04;
        }
    }
    ctx->pc = 0x320014u;
    // 0x320014: 0x8e2419bc  lw          $a0, 0x19BC($s1)
    ctx->pc = 0x320014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
label_320018:
    // 0x320018: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x320018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x32001c: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x32001cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x320020: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x320020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x320024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x320024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320028: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x320028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32002c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x32002Cu;
    {
        const bool branch_taken_0x32002c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32002Cu;
        // 0x320030: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32002c) {
            ctx->pc = 0x31FF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff88;
        }
    }
    ctx->pc = 0x320034u;
label_320034:
    // 0x320034: 0x8e2919bc  lw          $t1, 0x19BC($s1)
    ctx->pc = 0x320034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
    // 0x320038: 0x240200a4  addiu       $v0, $zero, 0xA4
    ctx->pc = 0x320038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x32003c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32003cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320040: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x320040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x320044: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x320044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x320048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x320048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32004c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x32004Cu;
    {
        const bool branch_taken_0x32004c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x320050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32004Cu;
        // 0x320050: 0x3c0b005b  lui         $t3, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32004c) {
            ctx->pc = 0x3200DCu;
            goto label_3200dc;
        }
    }
    ctx->pc = 0x320054u;
    // 0x320054: 0x3c0d0040  lui         $t5, 0x40
    ctx->pc = 0x320054u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64 << 16));
    // 0x320058: 0x240c00a4  addiu       $t4, $zero, 0xA4
    ctx->pc = 0x320058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x32005c: 0x262a0024  addiu       $t2, $s1, 0x24
    ctx->pc = 0x32005cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x320060: 0x25674260  addiu       $a3, $t3, 0x4260
    ctx->pc = 0x320060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16992));
    // 0x320064: 0x0  nop
    ctx->pc = 0x320064u;
    // NOP
label_320068:
    // 0x320068: 0x12c3018  mult        $a2, $t1, $t4
    ctx->pc = 0x320068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x32006c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x32006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x320070: 0x8da2bdc0  lw          $v0, -0x4240($t5)
    ctx->pc = 0x320070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294950336)));
    // 0x320074: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x320074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x320078: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x320078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32007c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x32007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x320080: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x320080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320084: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x320084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x320088: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x320088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32008c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320090: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x320090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x320094: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x320094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x320098: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x320098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32009c: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x32009cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3200a0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3200a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3200a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3200a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3200a8: 0xf8e10020  sqc2        $vf1, 0x20($a3)
    ctx->pc = 0x3200a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3200ac: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3200acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200b0: 0x1c63021  addu        $a2, $t6, $a2
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x3200b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3200b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3200b8: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x3200b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x3200bc: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x3200bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3200c0: 0xa0e20034  sb          $v0, 0x34($a3)
    ctx->pc = 0x3200c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x3200c4: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x3200c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200c8: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x3200c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x3200cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3200d0: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3200d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3200d4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3200D4u;
    {
        const bool branch_taken_0x3200d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200D4u;
        // 0x3200d8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200d4) {
            ctx->pc = 0x320068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320068;
        }
    }
    ctx->pc = 0x3200DCu;
label_3200dc:
    // 0x3200dc: 0x8e2319bc  lw          $v1, 0x19BC($s1)
    ctx->pc = 0x3200dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6588)));
    // 0x3200e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3200e4: 0x2446bdd0  addiu       $a2, $v0, -0x4230
    ctx->pc = 0x3200e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950352));
    // 0x3200e8: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x3200e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x3200ec: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x3200ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3200f0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3200f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3200f4: 0xc5604260  lwc1        $f0, 0x4260($t3)
    ctx->pc = 0x3200f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200f8: 0x25654260  addiu       $a1, $t3, 0x4260
    ctx->pc = 0x3200f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 16992));
    // 0x3200fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3200fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320100: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x320100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x320104: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x320104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x320108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x320108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32010c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x320110: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x320110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x320114: 0xac452c60  sw          $a1, 0x2C60($v0)
    ctx->pc = 0x320114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x482C60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C60u, _value); } while (0);
    // 0x320118: 0xe460bdc4  swc1        $f0, -0x423C($v1)
    ctx->pc = 0x320118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBDC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC4u, _value); } while (0); }
    // 0x32011c: 0xaec6bdc0  sw          $a2, -0x4240($s6)
    ctx->pc = 0x32011cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294950336), GPR_U32(ctx, 6));
    // 0x320120: 0xafc0bdc8  sw          $zero, -0x4238($fp)
    ctx->pc = 0x320120u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294950344), GPR_U32(ctx, 0));
    // 0x320124: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x320124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x320128: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x320128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x32012c: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x32012Cu;
    {
        const bool branch_taken_0x32012c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x320130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32012Cu;
        // 0x320130: 0xacc50024  sw          $a1, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32012c) {
            ctx->pc = 0x320164u;
            goto label_320164;
        }
    }
    ctx->pc = 0x320134u;
    // 0x320134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x320134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320138:
    // 0x320138: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x32013c: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x32013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x320140: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x320140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320144: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x320144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x320148: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32014c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x32014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x320150: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x320150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320154: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x320154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x320158: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x320158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32015c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x32015Cu;
    {
        const bool branch_taken_0x32015c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32015Cu;
        // 0x320160: 0xe6210014  swc1        $f1, 0x14($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32015c) {
            ctx->pc = 0x320138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320138;
        }
    }
    ctx->pc = 0x320164u;
label_320164:
    // 0x320164: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x320164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x320168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32016c:
    // 0x32016c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32016cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320170: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x320170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x320174: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x320174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320178: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x320178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32017c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32017cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320180: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x320180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x320184: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x320184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320188: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x320188u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32018c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x32018cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320190: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x320190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x320194: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x320194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x320198: 0x3e00008  jr          $ra
    ctx->pc = 0x320198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320198u;
        // 0x32019c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3201A0u;
}
