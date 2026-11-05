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

// Function: sub_001CD088
// Address: 0x1cd088 - 0x1cd298
void sub_001CD088_0x1cd088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD088_0x1cd088");
#endif

    switch (ctx->pc) {
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd0ecu: goto label_1cd0ec;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd140u: goto label_1cd140;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd158u: goto label_1cd158;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd268u: goto label_1cd268;
        default: break;
    }

    ctx->pc = 0x1cd088u;

    // 0x1cd088: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1cd088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1cd08c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cd090: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x1cd090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x1cd094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cd094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd098: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x1cd098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x1cd09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0a0: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x1cd0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x1cd0a4: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x1cd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x1cd0a8: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x1cd0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x1cd0ac: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x1cd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x1cd0b0: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x1cd0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x1cd0b4: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1cd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x1cd0b8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CD0B8u;
    SET_GPR_U32(ctx, 31, 0x1CD0C0u);
    ctx->pc = 0x1CD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0B8u;
    // 0x1cd0bc: 0xe7b40280  swc1        $f20, 0x280($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CD0B8u, 0x1CD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0C0u;
label_1cd0c0:
    // 0x1cd0c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0c4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CD0C4u;
    SET_GPR_U32(ctx, 31, 0x1CD0CCu);
    ctx->pc = 0x1CD0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0C4u;
    // 0x1cd0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CD0C4u, 0x1CD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0CCu;
label_1cd0cc:
    // 0x1cd0cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cd0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd0d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cd0d4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CD0D4u;
    SET_GPR_U32(ctx, 31, 0x1CD0DCu);
    ctx->pc = 0x1CD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0D4u;
    // 0x1cd0d8: 0x24a5d1e8  addiu       $a1, $a1, -0x2E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CD0D4u, 0x1CD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0DCu;
label_1cd0dc:
    // 0x1cd0dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cd0e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0e4: 0xc09e062  jal         func_278188
    ctx->pc = 0x1CD0E4u;
    SET_GPR_U32(ctx, 31, 0x1CD0ECu);
    ctx->pc = 0x1CD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0E4u;
    // 0x1cd0e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x1CD0E4u, 0x1CD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0ECu;
label_1cd0ec:
    // 0x1cd0ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cd0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CD0F4u;
    SET_GPR_U32(ctx, 31, 0x1CD0FCu);
    ctx->pc = 0x1CD0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0F4u;
    // 0x1cd0f8: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CD0F4u, 0x1CD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0FCu;
label_1cd0fc:
    // 0x1cd0fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD0FCu;
    {
        const bool branch_taken_0x1cd0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0fc) {
            ctx->pc = 0x1CD100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD0FCu;
            // 0x1cd100: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD10Cu;
            goto label_1cd10c;
        }
    }
    ctx->pc = 0x1CD104u;
    // 0x1cd104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD104u;
    {
        const bool branch_taken_0x1cd104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD104u;
        // 0x1cd108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd104) {
            ctx->pc = 0x1CD11Cu;
            goto label_1cd11c;
        }
    }
    ctx->pc = 0x1CD10Cu;
label_1cd10c:
    // 0x1cd10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd110: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CD110u;
    SET_GPR_U32(ctx, 31, 0x1CD118u);
    ctx->pc = 0x1CD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD110u;
    // 0x1cd114: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CD110u, 0x1CD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD118u;
label_1cd118:
    // 0x1cd118: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cd118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd11c:
    // 0x1cd11c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd120: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd124: 0xac4389ec  sw          $v1, -0x7614($v0)
    ctx->pc = 0x1cd124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F89ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F89ECu, _value); } while (0);
    // 0x1cd128: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x1cd12c: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1cd130: 0x27b50230  addiu       $s5, $sp, 0x230
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1cd134: 0x27b40234  addiu       $s4, $sp, 0x234
    ctx->pc = 0x1cd134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1cd138: 0x27b30238  addiu       $s3, $sp, 0x238
    ctx->pc = 0x1cd138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1cd13c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd140:
    // 0x1cd140: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CD140u;
    SET_GPR_U32(ctx, 31, 0x1CD148u);
    ctx->pc = 0x1CD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD140u;
    // 0x1cd144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CD140u, 0x1CD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD148u;
label_1cd148:
    // 0x1cd148: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cd148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cd14c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd150: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CD150u;
    SET_GPR_U32(ctx, 31, 0x1CD158u);
    ctx->pc = 0x1CD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD150u;
    // 0x1cd154: 0x26c5d1f8  addiu       $a1, $s6, -0x2E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CD150u, 0x1CD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD158u;
label_1cd158:
    // 0x1cd158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd15c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd160: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cd160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd164: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x1CD164u;
    SET_GPR_U32(ctx, 31, 0x1CD16Cu);
    ctx->pc = 0x1CD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD164u;
    // 0x1cd168: 0xe7b40230  swc1        $f20, 0x230($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x1CD164u, 0x1CD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD16Cu;
label_1cd16c:
    // 0x1cd16c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cd16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd174: 0xc085914  jal         func_216450
    ctx->pc = 0x1CD174u;
    SET_GPR_U32(ctx, 31, 0x1CD17Cu);
    ctx->pc = 0x1CD178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD174u;
    // 0x1cd178: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x1CD174u, 0x1CD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD17Cu;
label_1cd17c:
    // 0x1cd17c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1cd17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cd180: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CD180u;
    {
        const bool branch_taken_0x1cd180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD180u;
        // 0x1cd184: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd180) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD188u;
    // 0x1cd188: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd18c: 0x2442d210  addiu       $v0, $v0, -0x2DF0
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955536));
    // 0x1cd190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cd194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd198: 0x800008  jr          $a0
    ctx->pc = 0x1CD198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD1A0u: goto label_1cd1a0;
            case 0x1CD1C4u: goto label_1cd1c4;
            case 0x1CD1E8u: goto label_1cd1e8;
            case 0x1CD20Cu: goto label_1cd20c;
            case 0x1CD230u: goto label_1cd230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd1a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd1a8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd1ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd1b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd1b4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1cd1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd1b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd1bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CD1BCu;
    {
        const bool branch_taken_0x1cd1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1BCu;
        // 0x1cd1c0: 0xe44089f0  swc1        $f0, -0x7610($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd1bc) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD1C4u;
label_1cd1c4:
    // 0x1cd1c4: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd1c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd1cc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd1d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd1d8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd1dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd1e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CD1E0u;
    {
        const bool branch_taken_0x1cd1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1E0u;
        // 0x1cd1e4: 0xe44089f4  swc1        $f0, -0x760C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd1e0) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD1E8u;
label_1cd1e8:
    // 0x1cd1e8: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd1ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd1f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd1f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd1fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cd1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd204: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD204u;
    {
        const bool branch_taken_0x1cd204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD204u;
        // 0x1cd208: 0xe44089f8  swc1        $f0, -0x7608($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd204) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd210: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd214: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd218: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd228: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD228u;
    {
        const bool branch_taken_0x1cd228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD228u;
        // 0x1cd22c: 0xe44089fc  swc1        $f0, -0x7604($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937084), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd228) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD230u;
label_1cd230:
    // 0x1cd230: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd234: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd238: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd23c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd244: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd24c: 0xe4408a00  swc1        $f0, -0x7600($v0)
    ctx->pc = 0x1cd24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A00u, _value); } while (0); }
label_1cd250:
    // 0x1cd250: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd254: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CD254u;
    {
        const bool branch_taken_0x1cd254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD254u;
        // 0x1cd258: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd254) {
            ctx->pc = 0x1CD140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd140;
        }
    }
    ctx->pc = 0x1CD25Cu;
    // 0x1cd25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd260: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CD260u;
    SET_GPR_U32(ctx, 31, 0x1CD268u);
    ctx->pc = 0x1CD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD260u;
    // 0x1cd264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CD260u, 0x1CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD268u;
label_1cd268:
    // 0x1cd268: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1cd268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1cd26c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1cd26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1cd270: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1cd270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1cd274: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1cd274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1cd278: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1cd278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1cd27c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1cd27cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1cd280: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1cd280u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1cd284: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1cd284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1cd288: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x1cd288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD28Cu;
        // 0x1cd290: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD294u;
    // 0x1cd294: 0x0  nop
    ctx->pc = 0x1cd294u;
    // NOP
    ctx->pc = 0x1cd298u;
}
