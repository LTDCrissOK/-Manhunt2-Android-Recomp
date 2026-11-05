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

// Function: sub_001CC628
// Address: 0x1cc628 - 0x1cc9a8
void sub_001CC628_0x1cc628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC628_0x1cc628");
#endif

    switch (ctx->pc) {
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc980u: goto label_1cc980;
        default: break;
    }

    ctx->pc = 0x1cc628u;

    // 0x1cc628: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cc62c: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x1cc62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x1cc630: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x1cc630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x1cc634: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x1cc634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x1cc638: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1cc638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1cc63c: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x1cc63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x1cc640: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x1cc640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x1cc644: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x1cc644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x1cc648: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x1CC648u;
    SET_GPR_U32(ctx, 31, 0x1CC650u);
    ctx->pc = 0x1CC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC648u;
    // 0x1cc64c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x1CC648u, 0x1CC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC650u;
label_1cc650:
    // 0x1cc650: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cc650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc658: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc65c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CC65Cu;
    SET_GPR_U32(ctx, 31, 0x1CC664u);
    ctx->pc = 0x1CC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC65Cu;
    // 0x1cc660: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CC65Cu, 0x1CC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC664u;
label_1cc664:
    // 0x1cc664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc668: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC668u;
    SET_GPR_U32(ctx, 31, 0x1CC670u);
    ctx->pc = 0x1CC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC668u;
    // 0x1cc66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC668u, 0x1CC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC670u;
label_1cc670:
    // 0x1cc670: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc674: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc678: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC678u;
    SET_GPR_U32(ctx, 31, 0x1CC680u);
    ctx->pc = 0x1CC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC678u;
    // 0x1cc67c: 0x24a5cfa0  addiu       $a1, $a1, -0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC678u, 0x1CC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC680u;
label_1cc680:
    // 0x1cc680: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1cc680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1cc684: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1cc684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1cc688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc68c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC68Cu;
    SET_GPR_U32(ctx, 31, 0x1CC694u);
    ctx->pc = 0x1CC690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC68Cu;
    // 0x1cc690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC68Cu, 0x1CC694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC694u;
label_1cc694:
    // 0x1cc694: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC694u;
    {
        const bool branch_taken_0x1cc694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC694u;
        // 0x1cc698: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc694) {
            ctx->pc = 0x1CC6A4u;
            goto label_1cc6a4;
        }
    }
    ctx->pc = 0x1CC69Cu;
    // 0x1cc69c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc6a0: 0xe4408a34  swc1        $f0, -0x75CC($v0)
    ctx->pc = 0x1cc6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A34u, _value); } while (0); }
label_1cc6a4:
    // 0x1cc6a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6a8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC6A8u;
    SET_GPR_U32(ctx, 31, 0x1CC6B0u);
    ctx->pc = 0x1CC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6A8u;
    // 0x1cc6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC6A8u, 0x1CC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6B0u;
label_1cc6b0:
    // 0x1cc6b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc6b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC6B8u;
    SET_GPR_U32(ctx, 31, 0x1CC6C0u);
    ctx->pc = 0x1CC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6B8u;
    // 0x1cc6bc: 0x24a5cfc0  addiu       $a1, $a1, -0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC6B8u, 0x1CC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6C0u;
label_1cc6c0:
    // 0x1cc6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6c4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC6C4u;
    SET_GPR_U32(ctx, 31, 0x1CC6CCu);
    ctx->pc = 0x1CC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6C4u;
    // 0x1cc6c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC6C4u, 0x1CC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6CCu;
label_1cc6cc:
    // 0x1cc6cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC6CCu;
    {
        const bool branch_taken_0x1cc6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6CCu;
        // 0x1cc6d0: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6cc) {
            ctx->pc = 0x1CC6DCu;
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC6D4u;
    // 0x1cc6d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc6d8: 0xe4408a38  swc1        $f0, -0x75C8($v0)
    ctx->pc = 0x1cc6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A38u, _value); } while (0); }
label_1cc6dc:
    // 0x1cc6dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6e0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC6E0u;
    SET_GPR_U32(ctx, 31, 0x1CC6E8u);
    ctx->pc = 0x1CC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6E0u;
    // 0x1cc6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC6E0u, 0x1CC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6E8u;
label_1cc6e8:
    // 0x1cc6e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc6f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC6F0u;
    SET_GPR_U32(ctx, 31, 0x1CC6F8u);
    ctx->pc = 0x1CC6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6F0u;
    // 0x1cc6f4: 0x24a5cfe0  addiu       $a1, $a1, -0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC6F0u, 0x1CC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6F8u;
label_1cc6f8:
    // 0x1cc6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6fc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC6FCu;
    SET_GPR_U32(ctx, 31, 0x1CC704u);
    ctx->pc = 0x1CC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6FCu;
    // 0x1cc700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC6FCu, 0x1CC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC704u;
label_1cc704:
    // 0x1cc704: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC70Cu;
    // 0x1cc70c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc710: 0xe4408a3c  swc1        $f0, -0x75C4($v0)
    ctx->pc = 0x1cc710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A3Cu, _value); } while (0); }
label_1cc714:
    // 0x1cc714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc718: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC718u;
    SET_GPR_U32(ctx, 31, 0x1CC720u);
    ctx->pc = 0x1CC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC718u;
    // 0x1cc71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC718u, 0x1CC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC720u;
label_1cc720:
    // 0x1cc720: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc724: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc728: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC728u;
    SET_GPR_U32(ctx, 31, 0x1CC730u);
    ctx->pc = 0x1CC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC728u;
    // 0x1cc72c: 0x24a5d000  addiu       $a1, $a1, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC728u, 0x1CC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC730u;
label_1cc730:
    // 0x1cc730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc734: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC734u;
    SET_GPR_U32(ctx, 31, 0x1CC73Cu);
    ctx->pc = 0x1CC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC734u;
    // 0x1cc738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC734u, 0x1CC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC73Cu;
label_1cc73c:
    // 0x1cc73c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC73Cu;
    {
        const bool branch_taken_0x1cc73c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC73Cu;
        // 0x1cc740: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc73c) {
            ctx->pc = 0x1CC750u;
            goto label_1cc750;
        }
    }
    ctx->pc = 0x1CC744u;
    // 0x1cc744: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1cc744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc748: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc74c: 0xe4408a34  swc1        $f0, -0x75CC($v0)
    ctx->pc = 0x1cc74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A34u, _value); } while (0); }
label_1cc750:
    // 0x1cc750: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC750u;
    SET_GPR_U32(ctx, 31, 0x1CC758u);
    ctx->pc = 0x1CC754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC750u;
    // 0x1cc754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC750u, 0x1CC758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC758u;
label_1cc758:
    // 0x1cc758: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc75c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc760: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC760u;
    SET_GPR_U32(ctx, 31, 0x1CC768u);
    ctx->pc = 0x1CC764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC760u;
    // 0x1cc764: 0x24a5d020  addiu       $a1, $a1, -0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC760u, 0x1CC768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC768u;
label_1cc768:
    // 0x1cc768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc76c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC76Cu;
    SET_GPR_U32(ctx, 31, 0x1CC774u);
    ctx->pc = 0x1CC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC76Cu;
    // 0x1cc770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC76Cu, 0x1CC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC774u;
label_1cc774:
    // 0x1cc774: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC774u;
    {
        const bool branch_taken_0x1cc774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC774u;
        // 0x1cc778: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc774) {
            ctx->pc = 0x1CC788u;
            goto label_1cc788;
        }
    }
    ctx->pc = 0x1CC77Cu;
    // 0x1cc77c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1cc77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc780: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc784: 0xe4408a38  swc1        $f0, -0x75C8($v0)
    ctx->pc = 0x1cc784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A38u, _value); } while (0); }
label_1cc788:
    // 0x1cc788: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC788u;
    SET_GPR_U32(ctx, 31, 0x1CC790u);
    ctx->pc = 0x1CC78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC788u;
    // 0x1cc78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC788u, 0x1CC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC790u;
label_1cc790:
    // 0x1cc790: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc794: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc798: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC798u;
    SET_GPR_U32(ctx, 31, 0x1CC7A0u);
    ctx->pc = 0x1CC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC798u;
    // 0x1cc79c: 0x24a5d040  addiu       $a1, $a1, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC798u, 0x1CC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7A0u;
label_1cc7a0:
    // 0x1cc7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7a4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC7A4u;
    SET_GPR_U32(ctx, 31, 0x1CC7ACu);
    ctx->pc = 0x1CC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7A4u;
    // 0x1cc7a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC7A4u, 0x1CC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7ACu;
label_1cc7ac:
    // 0x1cc7ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC7ACu;
    {
        const bool branch_taken_0x1cc7ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7ACu;
        // 0x1cc7b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7ac) {
            ctx->pc = 0x1CC7C0u;
            goto label_1cc7c0;
        }
    }
    ctx->pc = 0x1CC7B4u;
    // 0x1cc7b4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1cc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc7b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc7bc: 0xe4408a3c  swc1        $f0, -0x75C4($v0)
    ctx->pc = 0x1cc7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A3Cu, _value); } while (0); }
label_1cc7c0:
    // 0x1cc7c0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC7C0u;
    SET_GPR_U32(ctx, 31, 0x1CC7C8u);
    ctx->pc = 0x1CC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7C0u;
    // 0x1cc7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC7C0u, 0x1CC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7C8u;
label_1cc7c8:
    // 0x1cc7c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc7cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc7d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC7D0u;
    SET_GPR_U32(ctx, 31, 0x1CC7D8u);
    ctx->pc = 0x1CC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7D0u;
    // 0x1cc7d4: 0x24a5d060  addiu       $a1, $a1, -0x2FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC7D0u, 0x1CC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7D8u;
label_1cc7d8:
    // 0x1cc7d8: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x1cc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x1cc7dc: 0xe7b40124  swc1        $f20, 0x124($sp)
    ctx->pc = 0x1cc7dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1cc7e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cc7e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7e4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC7E4u;
    SET_GPR_U32(ctx, 31, 0x1CC7ECu);
    ctx->pc = 0x1CC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7E4u;
    // 0x1cc7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC7E4u, 0x1CC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7ECu;
label_1cc7ec:
    // 0x1cc7ec: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1cc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc7f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc7f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7fc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC7FCu;
    SET_GPR_U32(ctx, 31, 0x1CC804u);
    ctx->pc = 0x1CC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7FCu;
    // 0x1cc800: 0xe4408a40  swc1        $f0, -0x75C0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC7FCu, 0x1CC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC804u;
label_1cc804:
    // 0x1cc804: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc808: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc80c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC80Cu;
    SET_GPR_U32(ctx, 31, 0x1CC814u);
    ctx->pc = 0x1CC810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC80Cu;
    // 0x1cc810: 0x24a5d078  addiu       $a1, $a1, -0x2F88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC80Cu, 0x1CC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC814u;
label_1cc814:
    // 0x1cc814: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x1cc814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x1cc818: 0xe7b40128  swc1        $f20, 0x128($sp)
    ctx->pc = 0x1cc818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1cc81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc820: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC820u;
    SET_GPR_U32(ctx, 31, 0x1CC828u);
    ctx->pc = 0x1CC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC820u;
    // 0x1cc824: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC820u, 0x1CC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC828u;
label_1cc828:
    // 0x1cc828: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1cc828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc82c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc830: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1cc834: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc838: 0xac838a44  sw          $v1, -0x75BC($a0)
    ctx->pc = 0x1cc838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A44u, _value); } while (0);
    // 0x1cc83c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc840: 0xe44089c4  swc1        $f0, -0x763C($v0)
    ctx->pc = 0x1cc840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F89C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F89C4u, _value); } while (0); }
    // 0x1cc844: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC844u;
    SET_GPR_U32(ctx, 31, 0x1CC84Cu);
    ctx->pc = 0x1CC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC844u;
    // 0x1cc848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC844u, 0x1CC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC84Cu;
label_1cc84c:
    // 0x1cc84c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc850: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc854: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC854u;
    SET_GPR_U32(ctx, 31, 0x1CC85Cu);
    ctx->pc = 0x1CC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC854u;
    // 0x1cc858: 0x24a5d088  addiu       $a1, $a1, -0x2F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC854u, 0x1CC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC85Cu;
label_1cc85c:
    // 0x1cc85c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cc860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc864: 0xc09e062  jal         func_278188
    ctx->pc = 0x1CC864u;
    SET_GPR_U32(ctx, 31, 0x1CC86Cu);
    ctx->pc = 0x1CC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC864u;
    // 0x1cc868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x1CC864u, 0x1CC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC86Cu;
label_1cc86c:
    // 0x1cc86c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc874: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC874u;
    SET_GPR_U32(ctx, 31, 0x1CC87Cu);
    ctx->pc = 0x1CC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC874u;
    // 0x1cc878: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC874u, 0x1CC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC87Cu;
label_1cc87c:
    // 0x1cc87c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC87Cu;
    {
        const bool branch_taken_0x1cc87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc87c) {
            ctx->pc = 0x1CC880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC87Cu;
            // 0x1cc880: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC88Cu;
            goto label_1cc88c;
        }
    }
    ctx->pc = 0x1CC884u;
    // 0x1cc884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC884u;
    {
        const bool branch_taken_0x1cc884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC884u;
        // 0x1cc888: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc884) {
            ctx->pc = 0x1CC89Cu;
            goto label_1cc89c;
        }
    }
    ctx->pc = 0x1CC88Cu;
label_1cc88c:
    // 0x1cc88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc890: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC890u;
    SET_GPR_U32(ctx, 31, 0x1CC898u);
    ctx->pc = 0x1CC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC890u;
    // 0x1cc894: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC890u, 0x1CC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC898u;
label_1cc898:
    // 0x1cc898: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc89c:
    // 0x1cc89c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc8a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8a4: 0xac438a58  sw          $v1, -0x75A8($v0)
    ctx->pc = 0x1cc8a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A58u, _value); } while (0);
    // 0x1cc8a8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC8A8u;
    SET_GPR_U32(ctx, 31, 0x1CC8B0u);
    ctx->pc = 0x1CC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8A8u;
    // 0x1cc8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC8A8u, 0x1CC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8B0u;
label_1cc8b0:
    // 0x1cc8b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc8b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc8b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC8B8u;
    SET_GPR_U32(ctx, 31, 0x1CC8C0u);
    ctx->pc = 0x1CC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8B8u;
    // 0x1cc8bc: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC8B8u, 0x1CC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8C0u;
label_1cc8c0:
    // 0x1cc8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8c4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC8C4u;
    SET_GPR_U32(ctx, 31, 0x1CC8CCu);
    ctx->pc = 0x1CC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8C4u;
    // 0x1cc8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC8C4u, 0x1CC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1cc8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc8d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8dc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC8DCu;
    SET_GPR_U32(ctx, 31, 0x1CC8E4u);
    ctx->pc = 0x1CC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8DCu;
    // 0x1cc8e0: 0xe4408a48  swc1        $f0, -0x75B8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC8DCu, 0x1CC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8E4u;
label_1cc8e4:
    // 0x1cc8e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc8e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc8ec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC8ECu;
    SET_GPR_U32(ctx, 31, 0x1CC8F4u);
    ctx->pc = 0x1CC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8ECu;
    // 0x1cc8f0: 0x24a5d0d0  addiu       $a1, $a1, -0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC8ECu, 0x1CC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8F4u;
label_1cc8f4:
    // 0x1cc8f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC8F8u;
    SET_GPR_U32(ctx, 31, 0x1CC900u);
    ctx->pc = 0x1CC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8F8u;
    // 0x1cc8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC8F8u, 0x1CC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC900u;
label_1cc900:
    // 0x1cc900: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1cc900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc904: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc908: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc910: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC910u;
    SET_GPR_U32(ctx, 31, 0x1CC918u);
    ctx->pc = 0x1CC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC910u;
    // 0x1cc914: 0xe4408a4c  swc1        $f0, -0x75B4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC910u, 0x1CC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC918u;
label_1cc918:
    // 0x1cc918: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc91c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc920: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC920u;
    SET_GPR_U32(ctx, 31, 0x1CC928u);
    ctx->pc = 0x1CC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC920u;
    // 0x1cc924: 0x24a5d0f0  addiu       $a1, $a1, -0x2F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC920u, 0x1CC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC928u;
label_1cc928:
    // 0x1cc928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc92c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC92Cu;
    SET_GPR_U32(ctx, 31, 0x1CC934u);
    ctx->pc = 0x1CC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC92Cu;
    // 0x1cc930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC92Cu, 0x1CC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC934u;
label_1cc934:
    // 0x1cc934: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1cc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc938: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc93c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc944: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC944u;
    SET_GPR_U32(ctx, 31, 0x1CC94Cu);
    ctx->pc = 0x1CC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC944u;
    // 0x1cc948: 0xe4408a50  swc1        $f0, -0x75B0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC944u, 0x1CC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC94Cu;
label_1cc94c:
    // 0x1cc94c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc950: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc954: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC954u;
    SET_GPR_U32(ctx, 31, 0x1CC95Cu);
    ctx->pc = 0x1CC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC954u;
    // 0x1cc958: 0x24a5d108  addiu       $a1, $a1, -0x2EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC954u, 0x1CC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC95Cu;
label_1cc95c:
    // 0x1cc95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc960: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC960u;
    SET_GPR_U32(ctx, 31, 0x1CC968u);
    ctx->pc = 0x1CC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC960u;
    // 0x1cc964: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC960u, 0x1CC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC968u;
label_1cc968:
    // 0x1cc968: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1cc968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc96c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc974: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cc974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc978: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC978u;
    SET_GPR_U32(ctx, 31, 0x1CC980u);
    ctx->pc = 0x1CC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC978u;
    // 0x1cc97c: 0xe4408a54  swc1        $f0, -0x75AC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC978u, 0x1CC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC980u;
label_1cc980:
    // 0x1cc980: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1cc980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cc984: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1cc984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1cc988: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1cc988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cc98c: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1cc98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1cc990: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1cc990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cc994: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x1cc994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1cc998: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1cc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC99Cu;
        // 0x1cc9a0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC9A4u;
    // 0x1cc9a4: 0x0  nop
    ctx->pc = 0x1cc9a4u;
    // NOP
    ctx->pc = 0x1cc9a8u;
}
