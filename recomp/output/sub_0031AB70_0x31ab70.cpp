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

// Function: sub_0031AB70
// Address: 0x31ab70 - 0x31ad70
void sub_0031AB70_0x31ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB70_0x31ab70");
#endif

    switch (ctx->pc) {
        case 0x31abc8u: goto label_31abc8;
        case 0x31ac0cu: goto label_31ac0c;
        case 0x31ac18u: goto label_31ac18;
        case 0x31ac34u: goto label_31ac34;
        case 0x31ac74u: goto label_31ac74;
        case 0x31acb8u: goto label_31acb8;
        case 0x31acd8u: goto label_31acd8;
        case 0x31ad10u: goto label_31ad10;
        case 0x31ad2cu: goto label_31ad2c;
        case 0x31ad48u: goto label_31ad48;
        default: break;
    }

    ctx->pc = 0x31ab70u;

    // 0x31ab70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31ab74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ab78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x31ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31ab7c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x31ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x31ab80: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x31ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x31ab84: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x31ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31ab88: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x31ab8c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x31ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x31ab90: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x31ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x31ab94: 0x14a2006c  bne         $a1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x31AB94u;
    {
        const bool branch_taken_0x31ab94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB94u;
        // 0x31ab98: 0xffbf0068  sd          $ra, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab94) {
            ctx->pc = 0x31AD48u;
            goto label_31ad48;
        }
    }
    ctx->pc = 0x31AB9Cu;
    // 0x31ab9c: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x31AB9Cu;
    {
        const bool branch_taken_0x31ab9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB9Cu;
        // 0x31aba0: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab9c) {
            ctx->pc = 0x31AD48u;
            goto label_31ad48;
        }
    }
    ctx->pc = 0x31ABA4u;
    // 0x31aba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aba8: 0x244221d0  addiu       $v0, $v0, 0x21D0
    ctx->pc = 0x31aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8656));
    // 0x31abac: 0x3c13005b  lui         $s3, 0x5B
    ctx->pc = 0x31abacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
    // 0x31abb0: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x31abb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    // 0x31abb4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x31abb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31abb8: 0x3c14005b  lui         $s4, 0x5B
    ctx->pc = 0x31abb8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)91 << 16));
    // 0x31abbc: 0x3c15005b  lui         $s5, 0x5B
    ctx->pc = 0x31abbcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)91 << 16));
    // 0x31abc0: 0x3c16005b  lui         $s6, 0x5B
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)91 << 16));
    // 0x31abc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31abc8:
    // 0x31abc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31abcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31abd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31abd4: 0x0  nop
    ctx->pc = 0x31abd4u;
    // NOP
    // 0x31abd8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31ABD8u;
    {
        const bool branch_taken_0x31abd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABD8u;
        // 0x31abdc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abd8) {
            ctx->pc = 0x31ABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31abc8;
        }
    }
    ctx->pc = 0x31ABE0u;
    // 0x31abe0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31abe4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31abe8: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x31abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x31abec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x31abecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x31abf0: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x31abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x31abf4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x31abf8: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x31abf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31abfc: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x31abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    // 0x31ac00: 0x263022b0  addiu       $s0, $s1, 0x22B0
    ctx->pc = 0x31ac00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8880));
    // 0x31ac04: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x31AC04u;
    SET_GPR_U32(ctx, 31, 0x31AC0Cu);
    ctx->pc = 0x31AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC04u;
    // 0x31ac08: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x31AC04u, 0x31AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC0Cu;
label_31ac0c:
    // 0x31ac0c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x31ac10: 0xc0c6b64  jal         func_31AD90
    ctx->pc = 0x31AC10u;
    SET_GPR_U32(ctx, 31, 0x31AC18u);
    ctx->pc = 0x31AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC10u;
    // 0x31ac14: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AD90u, 0x31AC10u, 0x31AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC18u;
label_31ac18:
    // 0x31ac18: 0x26632298  addiu       $v1, $s3, 0x2298
    ctx->pc = 0x31ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8856));
    // 0x31ac1c: 0xae602298  sw          $zero, 0x2298($s3)
    ctx->pc = 0x31ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8856), GPR_U32(ctx, 0));
    // 0x31ac20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31ac28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac2c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x31AC2Cu;
    SET_GPR_U32(ctx, 31, 0x31AC34u);
    ctx->pc = 0x31AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC2Cu;
    // 0x31ac30: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x31AC2Cu, 0x31AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC34u;
label_31ac34:
    // 0x31ac34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31ac38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31ac3c: 0xc461bd08  lwc1        $f1, -0x42F8($v1)
    ctx->pc = 0x31ac3cu;
    { uint32_t bits = FAST_READ32(0x3FBD08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ac40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac44: 0xc440bd0c  lwc1        $f0, -0x42F4($v0)
    ctx->pc = 0x31ac44u;
    { uint32_t bits = FAST_READ32(0x3FBD0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ac48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac4c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31ac4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ac50: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x31ac54: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31ac54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31ac58: 0x244922a0  addiu       $t1, $v0, 0x22A0
    ctx->pc = 0x31ac58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x31ac5c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x31ac5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31ac60: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x31ac60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31ac64: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x31ac64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ac68: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x31ac68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ac6c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x31AC6Cu;
    SET_GPR_U32(ctx, 31, 0x31AC74u);
    ctx->pc = 0x31AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC6Cu;
    // 0x31ac70: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x31AC6Cu, 0x31AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC74u;
label_31ac74:
    // 0x31ac74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31ac78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31ac7c: 0xc461bd18  lwc1        $f1, -0x42E8($v1)
    ctx->pc = 0x31ac7cu;
    { uint32_t bits = FAST_READ32(0x3FBD18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ac80: 0xc440bd1c  lwc1        $f0, -0x42E4($v0)
    ctx->pc = 0x31ac80u;
    { uint32_t bits = FAST_READ32(0x3FBD1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ac84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31ac84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ac88: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x31ac8c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31ac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31ac90: 0xae2022b0  sw          $zero, 0x22B0($s1)
    ctx->pc = 0x31ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8880), GPR_U32(ctx, 0));
    // 0x31ac94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31ac98: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31ac9c: 0x244722a8  addiu       $a3, $v0, 0x22A8
    ctx->pc = 0x31ac9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8872));
    // 0x31aca0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x31aca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31aca4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x31aca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31aca8: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x31aca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31acac: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x31acacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31acb0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x31ACB0u;
    SET_GPR_U32(ctx, 31, 0x31ACB8u);
    ctx->pc = 0x31ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACB0u;
    // 0x31acb4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31ACB0u, 0x31ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACB8u;
label_31acb8:
    // 0x31acb8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x31acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x31acbc: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x31acc0: 0xae2222b0  sw          $v0, 0x22B0($s1)
    ctx->pc = 0x31acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8880), GPR_U32(ctx, 2));
    // 0x31acc4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31acc8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x31acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x31accc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31acccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31acd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31acd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31acd4: 0x0  nop
    ctx->pc = 0x31acd4u;
    // NOP
label_31acd8:
    // 0x31acd8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31acdc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31ace0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x31ace4: 0x0  nop
    ctx->pc = 0x31ace4u;
    // NOP
    // 0x31ace8: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31ACE8u;
    {
        const bool branch_taken_0x31ace8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACE8u;
        // 0x31acec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ace8) {
            ctx->pc = 0x31ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31acd8;
        }
    }
    ctx->pc = 0x31ACF0u;
    // 0x31acf0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x31acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x31acf4: 0x268222c0  addiu       $v0, $s4, 0x22C0
    ctx->pc = 0x31acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8896));
    // 0x31acf8: 0xae8022c0  sw          $zero, 0x22C0($s4)
    ctx->pc = 0x31acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8896), GPR_U32(ctx, 0));
    // 0x31acfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad00: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x31ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x31ad04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31ad08: 0xc0f61a6  jal         func_3D8698
    ctx->pc = 0x31AD08u;
    SET_GPR_U32(ctx, 31, 0x31AD10u);
    ctx->pc = 0x31AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD08u;
    // 0x31ad0c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8698u, 0x31AD08u, 0x31AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD10u;
label_31ad10:
    // 0x31ad10: 0x26a222d8  addiu       $v0, $s5, 0x22D8
    ctx->pc = 0x31ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8920));
    // 0x31ad14: 0xaea022d8  sw          $zero, 0x22D8($s5)
    ctx->pc = 0x31ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8920), GPR_U32(ctx, 0));
    // 0x31ad18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad1c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x31ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31ad20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31ad24: 0xc0f61a6  jal         func_3D8698
    ctx->pc = 0x31AD24u;
    SET_GPR_U32(ctx, 31, 0x31AD2Cu);
    ctx->pc = 0x31AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD24u;
    // 0x31ad28: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8698u, 0x31AD24u, 0x31AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD2Cu;
label_31ad2c:
    // 0x31ad2c: 0x26c222f0  addiu       $v0, $s6, 0x22F0
    ctx->pc = 0x31ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8944));
    // 0x31ad30: 0xaec022f0  sw          $zero, 0x22F0($s6)
    ctx->pc = 0x31ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8944), GPR_U32(ctx, 0));
    // 0x31ad34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31ad3c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31ad40: 0xc0f61a6  jal         func_3D8698
    ctx->pc = 0x31AD40u;
    SET_GPR_U32(ctx, 31, 0x31AD48u);
    ctx->pc = 0x31AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD40u;
    // 0x31ad44: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8698u, 0x31AD40u, 0x31AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD48u;
label_31ad48:
    // 0x31ad48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x31ad48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ad4c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31ad4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x31ad50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ad54: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x31ad54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ad58: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31ad58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ad5c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x31ad5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31ad60: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x31ad60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ad64: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x31ad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x31AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD68u;
        // 0x31ad6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AD70u;
}
