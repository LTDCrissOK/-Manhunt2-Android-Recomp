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

// Function: sub_002D8150
// Address: 0x2d8150 - 0x2d8258
void sub_002D8150_0x2d8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8150_0x2d8150");
#endif

    switch (ctx->pc) {
        case 0x2d8150u: goto label_2d8150;
        case 0x2d8154u: goto label_2d8154;
        case 0x2d8158u: goto label_2d8158;
        case 0x2d815cu: goto label_2d815c;
        case 0x2d8160u: goto label_2d8160;
        case 0x2d8164u: goto label_2d8164;
        case 0x2d8168u: goto label_2d8168;
        case 0x2d816cu: goto label_2d816c;
        case 0x2d8170u: goto label_2d8170;
        case 0x2d8174u: goto label_2d8174;
        case 0x2d8178u: goto label_2d8178;
        case 0x2d817cu: goto label_2d817c;
        case 0x2d8180u: goto label_2d8180;
        case 0x2d8184u: goto label_2d8184;
        case 0x2d8188u: goto label_2d8188;
        case 0x2d818cu: goto label_2d818c;
        case 0x2d8190u: goto label_2d8190;
        case 0x2d8194u: goto label_2d8194;
        case 0x2d8198u: goto label_2d8198;
        case 0x2d819cu: goto label_2d819c;
        case 0x2d81a0u: goto label_2d81a0;
        case 0x2d81a4u: goto label_2d81a4;
        case 0x2d81a8u: goto label_2d81a8;
        case 0x2d81acu: goto label_2d81ac;
        case 0x2d81b0u: goto label_2d81b0;
        case 0x2d81b4u: goto label_2d81b4;
        case 0x2d81b8u: goto label_2d81b8;
        case 0x2d81bcu: goto label_2d81bc;
        case 0x2d81c0u: goto label_2d81c0;
        case 0x2d81c4u: goto label_2d81c4;
        case 0x2d81c8u: goto label_2d81c8;
        case 0x2d81ccu: goto label_2d81cc;
        case 0x2d81d0u: goto label_2d81d0;
        case 0x2d81d4u: goto label_2d81d4;
        case 0x2d81d8u: goto label_2d81d8;
        case 0x2d81dcu: goto label_2d81dc;
        case 0x2d81e0u: goto label_2d81e0;
        case 0x2d81e4u: goto label_2d81e4;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d81ecu: goto label_2d81ec;
        case 0x2d81f0u: goto label_2d81f0;
        case 0x2d81f4u: goto label_2d81f4;
        case 0x2d81f8u: goto label_2d81f8;
        case 0x2d81fcu: goto label_2d81fc;
        case 0x2d8200u: goto label_2d8200;
        case 0x2d8204u: goto label_2d8204;
        case 0x2d8208u: goto label_2d8208;
        case 0x2d820cu: goto label_2d820c;
        case 0x2d8210u: goto label_2d8210;
        case 0x2d8214u: goto label_2d8214;
        case 0x2d8218u: goto label_2d8218;
        case 0x2d821cu: goto label_2d821c;
        case 0x2d8220u: goto label_2d8220;
        case 0x2d8224u: goto label_2d8224;
        case 0x2d8228u: goto label_2d8228;
        case 0x2d822cu: goto label_2d822c;
        case 0x2d8230u: goto label_2d8230;
        case 0x2d8234u: goto label_2d8234;
        case 0x2d8238u: goto label_2d8238;
        case 0x2d823cu: goto label_2d823c;
        case 0x2d8240u: goto label_2d8240;
        case 0x2d8244u: goto label_2d8244;
        case 0x2d8248u: goto label_2d8248;
        case 0x2d824cu: goto label_2d824c;
        case 0x2d8250u: goto label_2d8250;
        case 0x2d8254u: goto label_2d8254;
        default: break;
    }

    ctx->pc = 0x2d8150u;

label_2d8150:
    // 0x2d8150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d8154:
    // 0x2d8154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d8158:
    // 0x2d8158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2d815c:
    // 0x2d815c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d815cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8160:
    // 0x2d8160: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2d8160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2d8164:
    // 0x2d8164: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d8164u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2d8168:
    // 0x2d8168: 0xc0843ea  jal         func_210FA8
label_2d816c:
    if (ctx->pc == 0x2D816Cu) {
        ctx->pc = 0x2D816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8168u;
        // 0x2d816c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8170u;
        goto label_2d8170;
    }
    ctx->pc = 0x2D8168u;
    SET_GPR_U32(ctx, 31, 0x2D8170u);
    ctx->pc = 0x2D816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8168u;
    // 0x2d816c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x2D8168u, 0x2D8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8170u;
label_2d8170:
    // 0x2d8170: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d8170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8174:
    // 0x2d8174: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2d8174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2d8178:
    // 0x2d8178: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2d8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2d817c:
    // 0x2d817c: 0x40f809  jalr        $v0
label_2d8180:
    if (ctx->pc == 0x2D8180u) {
        ctx->pc = 0x2D8184u;
        goto label_2d8184;
    }
    ctx->pc = 0x2D817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D817Cu, 0x2D8184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8184u;
label_2d8184:
    // 0x2d8184: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d8184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d8188:
    // 0x2d8188: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d8188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d818c:
    // 0x2d818c: 0x8c66bcf0  lw          $a2, -0x4310($v1)
    ctx->pc = 0x2d818cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950128)));
label_2d8190:
    // 0x2d8190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8194:
    // 0x2d8194: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2d8194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2d8198:
    // 0x2d8198: 0xaca2bce4  sw          $v0, -0x431C($a1)
    ctx->pc = 0x2d8198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950116), GPR_U32(ctx, 2));
label_2d819c:
    // 0x2d819c: 0x68e20127  ldl         $v0, 0x127($a3)
    ctx->pc = 0x2d819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d81a0:
    // 0x2d81a0: 0x6ce20120  ldr         $v0, 0x120($a3)
    ctx->pc = 0x2d81a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d81a4:
    // 0x2d81a4: 0x68e3012f  ldl         $v1, 0x12F($a3)
    ctx->pc = 0x2d81a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2d81a8:
    // 0x2d81a8: 0x6ce30128  ldr         $v1, 0x128($a3)
    ctx->pc = 0x2d81a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2d81ac:
    // 0x2d81ac: 0xb0c20017  sdl         $v0, 0x17($a2)
    ctx->pc = 0x2d81acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d81b0:
    // 0x2d81b0: 0xb4c20010  sdr         $v0, 0x10($a2)
    ctx->pc = 0x2d81b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d81b4:
    // 0x2d81b4: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x2d81b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d81b8:
    // 0x2d81b8: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x2d81b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d81bc:
    // 0x2d81bc: 0xc0db0ea  jal         func_36C3A8
label_2d81c0:
    if (ctx->pc == 0x2D81C0u) {
        ctx->pc = 0x2D81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81BCu;
        // 0x2d81c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81C4u;
        goto label_2d81c4;
    }
    ctx->pc = 0x2D81BCu;
    SET_GPR_U32(ctx, 31, 0x2D81C4u);
    ctx->pc = 0x2D81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81BCu;
    // 0x2d81c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x2D81BCu, 0x2D81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81C4u;
label_2d81c4:
    // 0x2d81c4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2d81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_2d81c8:
    // 0x2d81c8: 0x34a52001  ori         $a1, $a1, 0x2001
    ctx->pc = 0x2d81c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8193);
label_2d81cc:
    // 0x2d81cc: 0xc0dd83c  jal         func_3760F0
label_2d81d0:
    if (ctx->pc == 0x2D81D0u) {
        ctx->pc = 0x2D81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81CCu;
        // 0x2d81d0: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81D4u;
        goto label_2d81d4;
    }
    ctx->pc = 0x2D81CCu;
    SET_GPR_U32(ctx, 31, 0x2D81D4u);
    ctx->pc = 0x2D81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81CCu;
    // 0x2d81d0: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x2D81CCu, 0x2D81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81D4u;
label_2d81d4:
    // 0x2d81d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2d81d8:
    // 0x2d81d8: 0xc0db168  jal         func_36C5A0
label_2d81dc:
    if (ctx->pc == 0x2D81DCu) {
        ctx->pc = 0x2D81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81D8u;
        // 0x2d81dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81E0u;
        goto label_2d81e0;
    }
    ctx->pc = 0x2D81D8u;
    SET_GPR_U32(ctx, 31, 0x2D81E0u);
    ctx->pc = 0x2D81DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81D8u;
    // 0x2d81dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2D81D8u, 0x2D81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81E0u;
label_2d81e0:
    // 0x2d81e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d81e4:
    // 0x2d81e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d81e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81e8:
    // 0x2d81e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d81e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81ec:
    // 0x2d81ec: 0xc0c3244  jal         func_30C910
label_2d81f0:
    if (ctx->pc == 0x2D81F0u) {
        ctx->pc = 0x2D81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81ECu;
        // 0x2d81f0: 0x8c640104  lw          $a0, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81F4u;
        goto label_2d81f4;
    }
    ctx->pc = 0x2D81ECu;
    SET_GPR_U32(ctx, 31, 0x2D81F4u);
    ctx->pc = 0x2D81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81ECu;
    // 0x2d81f0: 0x8c640104  lw          $a0, 0x104($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C910u, 0x2D81ECu, 0x2D81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81F4u;
label_2d81f4:
    // 0x2d81f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d81f8:
    // 0x2d81f8: 0xc0db168  jal         func_36C5A0
label_2d81fc:
    if (ctx->pc == 0x2D81FCu) {
        ctx->pc = 0x2D81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81F8u;
        // 0x2d81fc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8200u;
        goto label_2d8200;
    }
    ctx->pc = 0x2D81F8u;
    SET_GPR_U32(ctx, 31, 0x2D8200u);
    ctx->pc = 0x2D81FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81F8u;
    // 0x2d81fc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2D81F8u, 0x2D8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8200u;
label_2d8200:
    // 0x2d8200: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d8200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_2d8204:
    // 0x2d8204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d8204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d8208:
    // 0x2d8208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d820c:
    // 0x2d820c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8210:
    // 0x2d8210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d8210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8214:
    // 0x2d8214: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2d8214u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2d8218:
    // 0x2d8218: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d821c:
    // 0x2d821c: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2d821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2d8220:
    // 0x2d8220: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2d8224:
    // 0x2d8224: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2d8224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2d8228:
    // 0x2d8228: 0xc0c2ecc  jal         func_30BB30
label_2d822c:
    if (ctx->pc == 0x2D822Cu) {
        ctx->pc = 0x2D822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8228u;
        // 0x2d822c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8230u;
        goto label_2d8230;
    }
    ctx->pc = 0x2D8228u;
    SET_GPR_U32(ctx, 31, 0x2D8230u);
    ctx->pc = 0x2D822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8228u;
    // 0x2d822c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x2D8228u, 0x2D8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8230u;
label_2d8230:
    // 0x2d8230: 0xc0db0ea  jal         func_36C3A8
label_2d8234:
    if (ctx->pc == 0x2D8234u) {
        ctx->pc = 0x2D8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8230u;
        // 0x2d8234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8238u;
        goto label_2d8238;
    }
    ctx->pc = 0x2D8230u;
    SET_GPR_U32(ctx, 31, 0x2D8238u);
    ctx->pc = 0x2D8234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8230u;
    // 0x2d8234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x2D8230u, 0x2D8238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8238u;
label_2d8238:
    // 0x2d8238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d8238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d823c:
    // 0x2d823c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d823cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d8240:
    // 0x2d8240: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2d8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d8244:
    // 0x2d8244: 0x3e00008  jr          $ra
label_2d8248:
    if (ctx->pc == 0x2D8248u) {
        ctx->pc = 0x2D8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8244u;
        // 0x2d8248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D824Cu;
        goto label_2d824c;
    }
    ctx->pc = 0x2D8244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8244u;
        // 0x2d8248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D824Cu;
label_2d824c:
    // 0x2d824c: 0x0  nop
    ctx->pc = 0x2d824cu;
    // NOP
label_2d8250:
    // 0x2d8250: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d8250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d8254:
    // 0x2d8254: 0x0  nop
    ctx->pc = 0x2d8254u;
    // NOP
    ctx->pc = 0x2d8258u;
}
