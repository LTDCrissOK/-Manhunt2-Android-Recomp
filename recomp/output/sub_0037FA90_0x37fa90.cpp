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

// Function: sub_0037FA90
// Address: 0x37fa90 - 0x37fc38
void sub_0037FA90_0x37fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FA90_0x37fa90");
#endif

    switch (ctx->pc) {
        case 0x37fae4u: goto label_37fae4;
        case 0x37faf4u: goto label_37faf4;
        case 0x37fb54u: goto label_37fb54;
        case 0x37fb6cu: goto label_37fb6c;
        default: break;
    }

    ctx->pc = 0x37fa90u;

    // 0x37fa90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37fa94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x37fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x37fa98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37fa9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37fa9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37faa0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x37faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x37faa4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x37faa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37faa8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x37faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x37faac: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x37faacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fab0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x37fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x37fab4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x37fab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fab8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x37fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x37fabc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x37fabcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fac0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37fac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37fac4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x37fac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x37fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x37facc: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x37faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x37fad0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x37fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x37fad4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x37fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x37fad8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x37fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x37fadc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37FADCu;
    SET_GPR_U32(ctx, 31, 0x37FAE4u);
    ctx->pc = 0x37FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FADCu;
    // 0x37fae0: 0x267000b0  addiu       $s0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37FADCu, 0x37FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FAE4u;
label_37fae4:
    // 0x37fae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37fae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37faec: 0xc0e023a  jal         func_3808E8
    ctx->pc = 0x37FAECu;
    SET_GPR_U32(ctx, 31, 0x37FAF4u);
    ctx->pc = 0x37FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FAECu;
    // 0x37faf0: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808E8u, 0x37FAECu, 0x37FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FAF4u;
label_37faf4:
    // 0x37faf4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x37faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x37faf8: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x37faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x37fafc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x37fafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x37fb00: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x37fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x37fb04: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x37fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x37fb08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x37fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37fb0c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x37fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x37fb10: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x37fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x37fb14: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x37fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x37fb18: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x37fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x37fb1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x37fb20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x37fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x37fb24: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x37fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x37fb28: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x37fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x37fb2c: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x37fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x37fb30: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x37fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x37fb34: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x37fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x37fb38: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x37fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x37fb3c: 0xacb20064  sw          $s2, 0x64($a1)
    ctx->pc = 0x37fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 18));
    // 0x37fb40: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x37fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x37fb44: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x37fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x37fb48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37fb4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37FB4Cu;
    SET_GPR_U32(ctx, 31, 0x37FB54u);
    ctx->pc = 0x37FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB4Cu;
    // 0x37fb50: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37FB4Cu, 0x37FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB54u;
label_37fb54:
    // 0x37fb54: 0x8e680130  lw          $t0, 0x130($s3)
    ctx->pc = 0x37fb54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x37fb58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x37fb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37fb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb64: 0xc0e004c  jal         func_380130
    ctx->pc = 0x37FB64u;
    SET_GPR_U32(ctx, 31, 0x37FB6Cu);
    ctx->pc = 0x37FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB64u;
    // 0x37fb68: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380130u, 0x37FB64u, 0x37FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB6Cu;
label_37fb6c:
    // 0x37fb6c: 0x8e630134  lw          $v1, 0x134($s3)
    ctx->pc = 0x37fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x37fb70: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x37fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x37fb74: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x37FB74u;
    {
        const bool branch_taken_0x37fb74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB74u;
        // 0x37fb78: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb74) {
            ctx->pc = 0x37FBACu;
            goto label_37fbac;
        }
    }
    ctx->pc = 0x37FB7Cu;
    // 0x37fb7c: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x37fb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x37fb80: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x37fb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x37fb84: 0x6a83000f  ldl         $v1, 0xF($s4)
    ctx->pc = 0x37fb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x37fb88: 0x6e830008  ldr         $v1, 0x8($s4)
    ctx->pc = 0x37fb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37fb8c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x37fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37fb90: 0xb242004f  sdl         $v0, 0x4F($s2)
    ctx->pc = 0x37fb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fb94: 0xb6420048  sdr         $v0, 0x48($s2)
    ctx->pc = 0x37fb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fb98: 0xb2430057  sdl         $v1, 0x57($s2)
    ctx->pc = 0x37fb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fb9c: 0xb6430050  sdr         $v1, 0x50($s2)
    ctx->pc = 0x37fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fba0: 0xae440058  sw          $a0, 0x58($s2)
    ctx->pc = 0x37fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
    // 0x37fba4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37FBA4u;
    {
        const bool branch_taken_0x37fba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fba4) {
            ctx->pc = 0x37FBB4u;
            goto label_37fbb4;
        }
    }
    ctx->pc = 0x37FBACu;
label_37fbac:
    // 0x37fbac: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x37fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x37fbb0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x37fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_37fbb4:
    // 0x37fbb4: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x37FBB4u;
    {
        const bool branch_taken_0x37fbb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FBB4u;
        // 0x37fbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fbb4) {
            ctx->pc = 0x37FBDCu;
            goto label_37fbdc;
        }
    }
    ctx->pc = 0x37FBBCu;
    // 0x37fbbc: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x37fbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x37fbc0: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x37fbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x37fbc4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x37fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37fbc8: 0xb3c60043  sdl         $a2, 0x43($fp)
    ctx->pc = 0x37fbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fbcc: 0xb7c6003c  sdr         $a2, 0x3C($fp)
    ctx->pc = 0x37fbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37fbd0: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x37fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x37fbd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37FBD4u;
    {
        const bool branch_taken_0x37fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FBD4u;
        // 0x37fbd8: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fbd4) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FBDCu;
label_37fbdc:
    // 0x37fbdc: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x37fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_37fbe0:
    // 0x37fbe0: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x37fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x37fbe4: 0x2d71023  subu        $v0, $s6, $s7
    ctx->pc = 0x37fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x37fbe8: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x37fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x37fbec: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37fbf0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fbf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37fbf8: 0xae630130  sw          $v1, 0x130($s3)
    ctx->pc = 0x37fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 3));
    // 0x37fbfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x37fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x37fc00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37fc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fc04: 0xae640134  sw          $a0, 0x134($s3)
    ctx->pc = 0x37fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 4));
    // 0x37fc08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37fc08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37fc0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37fc0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fc10: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x37fc10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37fc14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x37fc14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fc18: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x37fc18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37fc1c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x37fc1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37fc20: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x37fc20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37fc24: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x37fc24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37fc28: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x37fc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x37fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x37FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC2Cu;
        // 0x37fc30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FC34u;
    // 0x37fc34: 0x0  nop
    ctx->pc = 0x37fc34u;
    // NOP
    ctx->pc = 0x37fc38u;
}
