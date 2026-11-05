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

// Function: sub_00375290
// Address: 0x375290 - 0x3753a0
void sub_00375290_0x375290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375290_0x375290");
#endif

    switch (ctx->pc) {
        case 0x375370u: goto label_375370;
        default: break;
    }

    ctx->pc = 0x375290u;

    // 0x375290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375294: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x375298: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x375298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37529c: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x37529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x3752a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3752a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3752a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3752a8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x3752a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3752ac: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3752acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3752b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3752b4: 0x1120000c  beqz        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x3752B4u;
    {
        const bool branch_taken_0x3752b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3752B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752B4u;
        // 0x3752b8: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3752b4) {
            ctx->pc = 0x3752E8u;
            goto label_3752e8;
        }
    }
    ctx->pc = 0x3752BCu;
    // 0x3752bc: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3752bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3752c0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3752c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3752c4: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x3752c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x3752c8: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3752c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3752cc: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x3752ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x3752d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3752d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3752d4: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3752d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3752d8: 0x631ba  dsrl        $a2, $a2, 6
    ctx->pc = 0x3752d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 6);
    // 0x3752dc: 0xa2982  srl         $a1, $t2, 6
    ctx->pc = 0x3752dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x3752e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3752E0u;
    {
        const bool branch_taken_0x3752e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3752E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752E0u;
        // 0x3752e4: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3752e0) {
            ctx->pc = 0x375304u;
            goto label_375304;
        }
    }
    ctx->pc = 0x3752E8u;
label_3752e8:
    // 0x3752e8: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3752e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3752ec: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3752ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3752f0: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x3752f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x3752f4: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x3752f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x3752f8: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3752f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3752fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3752fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x375300: 0xa2982  srl         $a1, $t2, 6
    ctx->pc = 0x375300u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
label_375304:
    // 0x375304: 0x4233a  dsrl        $a0, $a0, 12
    ctx->pc = 0x375304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 12);
    // 0x375308: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x375308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x37530c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x37530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x375310: 0x31cba  dsrl        $v1, $v1, 18
    ctx->pc = 0x375310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 18);
    // 0x375314: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x375314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x375318: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37531c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x375320: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x375320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x375324: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x375328: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x375328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x37532c: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x37532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x375330: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x375330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375334: 0x738fc  dsll32      $a3, $a3, 3
    ctx->pc = 0x375334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 3));
    // 0x375338: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x375338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37533c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x37533cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x375340: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x375340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x375344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375348: 0x24cc80a0  addiu       $t4, $a2, -0x7F60
    ctx->pc = 0x375348u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934688));
    // 0x37534c: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x37534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x375350: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x375350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x375354: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x375354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375358: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x375358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37535c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375360: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x375360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x375364: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x375364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x375368: 0xc0dd5da  jal         func_375768
    ctx->pc = 0x375368u;
    SET_GPR_U32(ctx, 31, 0x375370u);
    ctx->pc = 0x37536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375368u;
    // 0x37536c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375768u, 0x375368u, 0x375370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375370u;
label_375370:
    // 0x375370: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x375370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x375374: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x375378: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x375378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37537c: 0x8ca2cd00  lw          $v0, -0x3300($a1)
    ctx->pc = 0x37537cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x375380: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x375380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x375384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37538c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375390: 0xaca2cd00  sw          $v0, -0x3300($a1)
    ctx->pc = 0x375390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x375394: 0x3e00008  jr          $ra
    ctx->pc = 0x375394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375394u;
        // 0x375398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37539Cu;
    // 0x37539c: 0x0  nop
    ctx->pc = 0x37539cu;
    // NOP
    ctx->pc = 0x3753a0u;
}
