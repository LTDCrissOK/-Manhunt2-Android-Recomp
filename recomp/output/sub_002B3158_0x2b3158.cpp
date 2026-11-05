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

// Function: sub_002B3158
// Address: 0x2b3158 - 0x2b3340
void sub_002B3158_0x2b3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3158_0x2b3158");
#endif

    switch (ctx->pc) {
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b3318u: goto label_2b3318;
        default: break;
    }

    ctx->pc = 0x2b3158u;

    // 0x2b3158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b315c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2b3160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3164: 0x34422d98  ori         $v0, $v0, 0x2D98
    ctx->pc = 0x2b3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11672);
    // 0x2b3168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b316c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b316cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3170: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3174: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2b3174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b3178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b3178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b317c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2b317cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2b3180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b3180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3184: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2b3184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2b3188: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x2b3188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x2b318c: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x2b318cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
    // 0x2b3190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3194: 0x246365a0  addiu       $v1, $v1, 0x65A0
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26016));
    // 0x2b3198: 0x24c66560  addiu       $a2, $a2, 0x6560
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25952));
    // 0x2b319c: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x2b319cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x2b31a0: 0xac822c18  sw          $v0, 0x2C18($a0)
    ctx->pc = 0x2b31a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C18u, _value); } while (0);
    // 0x2b31a4: 0x24a56580  addiu       $a1, $a1, 0x6580
    ctx->pc = 0x2b31a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
    // 0x2b31a8: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x2b31a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x2b31ac: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x2b31acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x2b31b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b31b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b31b4: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x2b31b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x2b31b8: 0xace42c14  sw          $a0, 0x2C14($a3)
    ctx->pc = 0x2b31b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C14u, _value); } while (0);
    // 0x2b31bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b31c0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2b31c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5A65B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65B4u, _value); } while (0);
    // 0x2b31c4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2b31c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5A65B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65B0u, _value); } while (0);
    // 0x2b31c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b31cc: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2b31ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5A6570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6570u, _value); } while (0);
    // 0x2b31d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b31d4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2b31d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5A6590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6590u, _value); } while (0);
    // 0x2b31d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2b31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b31dc: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x2b31dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5A6574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6574u, _value); } while (0);
    // 0x2b31e0: 0xad026630  sw          $v0, 0x6630($t0)
    ctx->pc = 0x2b31e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5A6630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6630u, _value); } while (0);
    // 0x2b31e4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2b31e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5A6594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6594u, _value); } while (0);
    // 0x2b31e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b31ec: 0xad222c1c  sw          $v0, 0x2C1C($t1)
    ctx->pc = 0x2b31ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C1Cu, _value); } while (0);
    // 0x2b31f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2b31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b31f4: 0xc0c1418  jal         func_305060
    ctx->pc = 0x2B31F4u;
    SET_GPR_U32(ctx, 31, 0x2B31FCu);
    ctx->pc = 0x2B31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31F4u;
    // 0x2b31f8: 0xad432c20  sw          $v1, 0x2C20($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 11296), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305060u, 0x2B31F4u, 0x2B31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31FCu;
label_2b31fc:
    // 0x2b31fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2b31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2b3200: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2b3200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2b3204: 0x2463c690  addiu       $v1, $v1, -0x3970
    ctx->pc = 0x2b3204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
    // 0x2b3208: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2b3208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b320c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2b3210: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B3210u;
    {
        const bool branch_taken_0x2b3210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3210u;
        // 0x2b3214: 0x26020088  addiu       $v0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3210) {
            ctx->pc = 0x2B3270u;
            goto label_2b3270;
        }
    }
    ctx->pc = 0x2B3218u;
    // 0x2b3218: 0x3c13005b  lui         $s3, 0x5B
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
label_2b321c:
    // 0x2b321c: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x2b321cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b3220: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x2b3220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b3224: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2b3224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b3228: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2b3228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b322c: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2b322cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b3230: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x2b3230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b3234: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x2b3234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b3238: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x2b3238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b323c: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2b323cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3240: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x2b3240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3244: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2b3244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3248: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2b3248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b324c: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2b324cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3250: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2b3250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3254: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2b3254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3258: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2b3258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b325c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2b325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b3260: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B3260u;
    {
        const bool branch_taken_0x2b3260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3260u;
        // 0x2b3264: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3260) {
            ctx->pc = 0x2B321Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b321c;
        }
    }
    ctx->pc = 0x2B3268u;
    // 0x2b3268: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3268u;
    {
        const bool branch_taken_0x2b3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3268) {
            ctx->pc = 0x2B32A0u;
            goto label_2b32a0;
        }
    }
    ctx->pc = 0x2B3270u;
label_2b3270:
    // 0x2b3270: 0x3c13005b  lui         $s3, 0x5B
    ctx->pc = 0x2b3270u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
label_2b3274:
    // 0x2b3274: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2b3274u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b3278: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2b3278u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b327c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2b327cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3280: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2b3280u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b3284: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2b3284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2b3288: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2b3288u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2b328c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2b328cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2b3290: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2b3290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2b3294: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2b3294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b3298: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3298u;
    {
        const bool branch_taken_0x2b3298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3298u;
        // 0x2b329c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3298) {
            ctx->pc = 0x2B3274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3274;
        }
    }
    ctx->pc = 0x2B32A0u;
label_2b32a0:
    // 0x2b32a0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2b32a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b32a4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2b32a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b32a8: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2b32a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b32ac: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2b32acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b32b0: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2b32b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b32b4: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2b32b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b32b8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x2b32b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32bc: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x2b32bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32c0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2b32c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32c4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2b32c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32c8: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x2b32c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b32ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b32d0: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x2b32d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b32d4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x2B32D4u;
    SET_GPR_U32(ctx, 31, 0x2B32DCu);
    ctx->pc = 0x2B32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B32D4u;
    // 0x2b32d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288520u, 0x2B32D4u, 0x2B32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32DCu;
label_2b32dc:
    // 0x2b32dc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2b32e0: 0x26646e00  addiu       $a0, $s3, 0x6E00
    ctx->pc = 0x2b32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28160));
    // 0x2b32e4: 0x34422e38  ori         $v0, $v0, 0x2E38
    ctx->pc = 0x2b32e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11832);
    // 0x2b32e8: 0xc0c9a20  jal         func_326880
    ctx->pc = 0x2B32E8u;
    SET_GPR_U32(ctx, 31, 0x2B32F0u);
    ctx->pc = 0x2B32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B32E8u;
    // 0x2b32ec: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x2B32E8u, 0x2B32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32F0u;
label_2b32f0:
    // 0x2b32f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b32f4: 0x0  nop
    ctx->pc = 0x2b32f4u;
    // NOP
label_2b32f8:
    // 0x2b32f8: 0x2121804  sllv        $v1, $s2, $s0
    ctx->pc = 0x2b32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x2b32fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b32fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3300: 0x26646e00  addiu       $a0, $s3, 0x6E00
    ctx->pc = 0x2b3300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28160));
    // 0x2b3304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3308u;
    {
        const bool branch_taken_0x2b3308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3308u;
        // 0x2b330c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3308) {
            ctx->pc = 0x2B3318u;
            goto label_2b3318;
        }
    }
    ctx->pc = 0x2B3310u;
    // 0x2b3310: 0xc0c9a2a  jal         func_3268A8
    ctx->pc = 0x2B3310u;
    SET_GPR_U32(ctx, 31, 0x2B3318u);
    ctx->pc = 0x3268A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3268A8u, 0x2B3310u, 0x2B3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3318u;
label_2b3318:
    // 0x2b3318: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x2b3318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2b331c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B331Cu;
    {
        const bool branch_taken_0x2b331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b331c) {
            ctx->pc = 0x2B3320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B331Cu;
            // 0x2b3320: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B32F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b32f8;
        }
    }
    ctx->pc = 0x2B3324u;
    // 0x2b3324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b332c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b332cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3330: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b3330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3338: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3338u;
        // 0x2b333c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3340u;
}
