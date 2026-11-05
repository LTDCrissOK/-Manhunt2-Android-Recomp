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

// Function: sub_00216300
// Address: 0x216300 - 0x216400
void sub_00216300_0x216300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216300_0x216300");
#endif

    switch (ctx->pc) {
        case 0x216340u: goto label_216340;
        case 0x216350u: goto label_216350;
        case 0x2163b8u: goto label_2163b8;
        default: break;
    }

    ctx->pc = 0x216300u;

    // 0x216300: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x216304: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x216304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x216308: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x216308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21630c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21630cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216310: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x216310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x216314: 0x37b20008  ori         $s2, $sp, 0x8
    ctx->pc = 0x216314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x216318: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x216318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x21631c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x216320: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x216320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x216324: 0x24150280  addiu       $s5, $zero, 0x280
    ctx->pc = 0x216324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x216328: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x216328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21632c: 0x2456e4c0  addiu       $s6, $v0, -0x1B40
    ctx->pc = 0x21632cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
    // 0x216330: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x216330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x216334: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x216334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x216338: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x216338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x21633c: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x21633cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_216340:
    // 0x216340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x216340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216344: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x216344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x216348: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x216348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21634c: 0x0  nop
    ctx->pc = 0x21634cu;
    // NOP
label_216350:
    // 0x216350: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x216354: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x216354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x216358: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x216358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x21635c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216360: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x216360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216364: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216368: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x216368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21636c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21636cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x216370: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x216370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x216374: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x216374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x216378: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x216378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x21637c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x216380: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x216380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x216384: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x216384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x216388: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x216388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21638c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x21638cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216390: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x216390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x216394: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x216394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x216398: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x216398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21639c: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x21639cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2163a0: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x2163a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2163a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2163a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2163a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2163A8u;
    {
        const bool branch_taken_0x2163a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163A8u;
        // 0x2163ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163a8) {
            ctx->pc = 0x2163B8u;
            goto label_2163b8;
        }
    }
    ctx->pc = 0x2163B0u;
    // 0x2163b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2163B0u;
    SET_GPR_U32(ctx, 31, 0x2163B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2163B0u, 0x2163B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163B8u;
label_2163b8:
    // 0x2163b8: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2163b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2163bc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2163BCu;
    {
        const bool branch_taken_0x2163bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163BCu;
        // 0x2163c0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163bc) {
            ctx->pc = 0x216350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216350;
        }
    }
    ctx->pc = 0x2163C4u;
    // 0x2163c4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2163c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163c8: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x2163c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2163cc: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2163CCu;
    {
        const bool branch_taken_0x2163cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2163cc) {
            ctx->pc = 0x2163D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2163CCu;
            // 0x2163d0: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x216340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216340;
        }
    }
    ctx->pc = 0x2163D4u;
    // 0x2163d4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2163d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2163d8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2163d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2163dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2163dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2163e0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2163e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2163e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2163e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2163e8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2163e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2163ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2163ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2163f0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2163f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2163f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2163F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2163F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163F4u;
        // 0x2163f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2163F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2163FCu;
    // 0x2163fc: 0x0  nop
    ctx->pc = 0x2163fcu;
    // NOP
    ctx->pc = 0x216400u;
}
