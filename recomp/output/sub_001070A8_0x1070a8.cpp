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

// Function: sub_001070A8
// Address: 0x1070a8 - 0x1071a8
void sub_001070A8_0x1070a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001070A8_0x1070a8");
#endif

    switch (ctx->pc) {
        case 0x1070e8u: goto label_1070e8;
        case 0x1070f8u: goto label_1070f8;
        case 0x107160u: goto label_107160;
        default: break;
    }

    ctx->pc = 0x1070a8u;

    // 0x1070a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1070a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1070ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1070acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1070b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1070b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1070b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1070b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1070b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1070bc: 0x37b20008  ori         $s2, $sp, 0x8
    ctx->pc = 0x1070bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1070c0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1070c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1070c4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1070c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1070c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1070cc: 0x24150280  addiu       $s5, $zero, 0x280
    ctx->pc = 0x1070ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1070d0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1070d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1070d4: 0x24562dd0  addiu       $s6, $v0, 0x2DD0
    ctx->pc = 0x1070d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
    // 0x1070d8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1070d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1070dc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1070dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1070e0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1070e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1070e4: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x1070e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1070e8:
    // 0x1070e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1070e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070ec: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1070ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1070f0: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1070f4: 0x0  nop
    ctx->pc = 0x1070f4u;
    // NOP
label_1070f8:
    // 0x1070f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1070f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1070fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1070fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x107100: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x107100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x107104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107108: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x107108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10710c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107110: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x107114: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107118: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x107118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10711c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x10711cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x107120: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x107120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x107124: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x107124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x107128: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x107128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x10712c: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x10712cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x107130: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x107130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x107134: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x107134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x107138: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x107138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10713c: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x10713cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x107140: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x107140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x107144: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x107144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x107148: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x107148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10714c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107150: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107150u;
    {
        const bool branch_taken_0x107150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107150u;
        // 0x107154: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107150) {
            ctx->pc = 0x107160u;
            goto label_107160;
        }
    }
    ctx->pc = 0x107158u;
    // 0x107158: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x107158u;
    SET_GPR_U32(ctx, 31, 0x107160u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x107158u, 0x107160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107160u;
label_107160:
    // 0x107160: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x107160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x107164: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x107164u;
    {
        const bool branch_taken_0x107164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107164u;
        // 0x107168: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107164) {
            ctx->pc = 0x1070F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1070f8;
        }
    }
    ctx->pc = 0x10716Cu;
    // 0x10716c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107170: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x107174: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x107174u;
    {
        const bool branch_taken_0x107174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107174) {
            ctx->pc = 0x107178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107174u;
            // 0x107178: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1070E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1070e8;
        }
    }
    ctx->pc = 0x10717Cu;
    // 0x10717c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10717cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107180: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x107180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x107184: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x107184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107188: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x107188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10718c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10718cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107190: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x107190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x107194: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107198: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x107198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10719c: 0x3e00008  jr          $ra
    ctx->pc = 0x10719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1071A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10719Cu;
        // 0x1071a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1071A4u;
    // 0x1071a4: 0x0  nop
    ctx->pc = 0x1071a4u;
    // NOP
    ctx->pc = 0x1071a8u;
}
