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

// Function: sub_0028EE50
// Address: 0x28ee50 - 0x28f008
void sub_0028EE50_0x28ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EE50_0x28ee50");
#endif

    switch (ctx->pc) {
        case 0x28ee9cu: goto label_28ee9c;
        case 0x28eea8u: goto label_28eea8;
        case 0x28eeb4u: goto label_28eeb4;
        case 0x28eec8u: goto label_28eec8;
        case 0x28eee0u: goto label_28eee0;
        case 0x28eef8u: goto label_28eef8;
        case 0x28ef0cu: goto label_28ef0c;
        case 0x28ef18u: goto label_28ef18;
        case 0x28ef34u: goto label_28ef34;
        case 0x28ef68u: goto label_28ef68;
        case 0x28ef7cu: goto label_28ef7c;
        case 0x28ef88u: goto label_28ef88;
        case 0x28ef94u: goto label_28ef94;
        case 0x28efb8u: goto label_28efb8;
        case 0x28efc4u: goto label_28efc4;
        case 0x28efd8u: goto label_28efd8;
        default: break;
    }

    ctx->pc = 0x28ee50u;

    // 0x28ee50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x28ee54: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x28ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x28ee58: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x28ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x28ee5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ee5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee64: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x28ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x28ee68: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x28ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x28ee6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee70: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x28ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x28ee74: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x28ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28ee78: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x28ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x28ee7c: 0x26550008  addiu       $s5, $s2, 0x8
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28ee80: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x28ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x28ee84: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x28ee84u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x28ee88: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x28ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x28ee8c: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x28ee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x28ee90: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x28ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x28ee94: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x28EE94u;
    SET_GPR_U32(ctx, 31, 0x28EE9Cu);
    ctx->pc = 0x28EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE94u;
    // 0x28ee98: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x28EE94u, 0x28EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE9Cu;
label_28ee9c:
    // 0x28ee9c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x28ee9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28eea0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x28EEA0u;
    {
        const bool branch_taken_0x28eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEA0u;
        // 0x28eea4: 0x27b30110  addiu       $s3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eea0) {
            ctx->pc = 0x28EFB8u;
            goto label_28efb8;
        }
    }
    ctx->pc = 0x28EEA8u;
label_28eea8:
    // 0x28eea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28eea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eeac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x28EEACu;
    SET_GPR_U32(ctx, 31, 0x28EEB4u);
    ctx->pc = 0x28EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EEACu;
    // 0x28eeb0: 0x2445b2c8  addiu       $a1, $v0, -0x4D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x28EEACu, 0x28EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEB4u;
label_28eeb4:
    // 0x28eeb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eeb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EEB8u;
    {
        const bool branch_taken_0x28eeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEB8u;
        // 0x28eebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eeb8) {
            ctx->pc = 0x28EED0u;
            goto label_28eed0;
        }
    }
    ctx->pc = 0x28EEC0u;
    // 0x28eec0: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x28EEC0u;
    SET_GPR_U32(ctx, 31, 0x28EEC8u);
    ctx->pc = 0x28EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EEC0u;
    // 0x28eec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x28EEC0u, 0x28EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEC8u;
label_28eec8:
    // 0x28eec8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28EEC8u;
    {
        const bool branch_taken_0x28eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEC8u;
        // 0x28eecc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eec8) {
            ctx->pc = 0x28EFBCu;
            goto label_28efbc;
        }
    }
    ctx->pc = 0x28EED0u;
label_28eed0:
    // 0x28eed0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x28eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x28eed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eed8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x28EED8u;
    SET_GPR_U32(ctx, 31, 0x28EEE0u);
    ctx->pc = 0x28EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EED8u;
    // 0x28eedc: 0x2445b2d8  addiu       $a1, $v0, -0x4D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x28EED8u, 0x28EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEE0u;
label_28eee0:
    // 0x28eee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eee4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28EEE4u;
    {
        const bool branch_taken_0x28eee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEE4u;
        // 0x28eee8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eee4) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EEECu;
    // 0x28eeec: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28eef0: 0xc09e168  jal         func_2785A0
    ctx->pc = 0x28EEF0u;
    SET_GPR_U32(ctx, 31, 0x28EEF8u);
    ctx->pc = 0x28EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EEF0u;
    // 0x28eef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2785A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2785A0u, 0x28EEF0u, 0x28EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEF8u;
label_28eef8:
    // 0x28eef8: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x28eefc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28ef00: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28ef04: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28EF04u;
    SET_GPR_U32(ctx, 31, 0x28EF0Cu);
    ctx->pc = 0x28EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF04u;
    // 0x28ef08: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28EF04u, 0x28EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF0Cu;
label_28ef0c:
    // 0x28ef0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef10: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x28EF10u;
    SET_GPR_U32(ctx, 31, 0x28EF18u);
    ctx->pc = 0x28EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF10u;
    // 0x28ef14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x28EF10u, 0x28EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF18u;
label_28ef18:
    // 0x28ef18: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x28ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x28ef1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28ef1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef20: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x28ef24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ef28: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28ef2c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28EF2Cu;
    SET_GPR_U32(ctx, 31, 0x28EF34u);
    ctx->pc = 0x28EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF2Cu;
    // 0x28ef30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28EF2Cu, 0x28EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF34u;
label_28ef34:
    // 0x28ef34: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x28ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x28ef38: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x28ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ef3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ef40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ef44: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28ef48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ef4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ef50: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28ef50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28ef54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28EF54u;
    {
        const bool branch_taken_0x28ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF54u;
        // 0x28ef58: 0xae440030  sw          $a0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef54) {
            ctx->pc = 0x28EFB8u;
            goto label_28efb8;
        }
    }
    ctx->pc = 0x28EF5Cu;
label_28ef5c:
    // 0x28ef5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x28EF60u;
    SET_GPR_U32(ctx, 31, 0x28EF68u);
    ctx->pc = 0x28EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF60u;
    // 0x28ef64: 0x27c5b2e0  addiu       $a1, $fp, -0x4D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x28EF60u, 0x28EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF68u;
label_28ef68:
    // 0x28ef68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ef6c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28EF6Cu;
    {
        const bool branch_taken_0x28ef6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ef6c) {
            ctx->pc = 0x28EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF6Cu;
            // 0x28ef70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EFBCu;
            goto label_28efbc;
        }
    }
    ctx->pc = 0x28EF74u;
    // 0x28ef74: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x28EF74u;
    SET_GPR_U32(ctx, 31, 0x28EF7Cu);
    ctx->pc = 0x28EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF74u;
    // 0x28ef78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x28EF74u, 0x28EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF7Cu;
label_28ef7c:
    // 0x28ef7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef80: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x28EF80u;
    SET_GPR_U32(ctx, 31, 0x28EF88u);
    ctx->pc = 0x28EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF80u;
    // 0x28ef84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x28EF80u, 0x28EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF88u;
label_28ef88:
    // 0x28ef88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x28EF8Cu;
    SET_GPR_U32(ctx, 31, 0x28EF94u);
    ctx->pc = 0x28EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF8Cu;
    // 0x28ef90: 0x26e5b2e8  addiu       $a1, $s7, -0x4D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x28EF8Cu, 0x28EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF94u;
label_28ef94:
    // 0x28ef94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ef94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ef98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EF98u;
    {
        const bool branch_taken_0x28ef98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF98u;
        // 0x28ef9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef98) {
            ctx->pc = 0x28EFACu;
            goto label_28efac;
        }
    }
    ctx->pc = 0x28EFA0u;
    // 0x28efa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28efa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EFA4u;
    {
        const bool branch_taken_0x28efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFA4u;
        // 0x28efa8: 0xa242003c  sb          $v0, 0x3C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efa4) {
            ctx->pc = 0x28EFB0u;
            goto label_28efb0;
        }
    }
    ctx->pc = 0x28EFACu;
label_28efac:
    // 0x28efac: 0xa240003c  sb          $zero, 0x3C($s2)
    ctx->pc = 0x28efacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 0));
label_28efb0:
    // 0x28efb0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x28EFB0u;
    SET_GPR_U32(ctx, 31, 0x28EFB8u);
    ctx->pc = 0x28EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFB0u;
    // 0x28efb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x28EFB0u, 0x28EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFB8u;
label_28efb8:
    // 0x28efb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28efbc:
    // 0x28efbc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x28EFBCu;
    SET_GPR_U32(ctx, 31, 0x28EFC4u);
    ctx->pc = 0x28EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFBCu;
    // 0x28efc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x28EFBCu, 0x28EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFC4u;
label_28efc4:
    // 0x28efc4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x28EFC4u;
    {
        const bool branch_taken_0x28efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFC4u;
        // 0x28efc8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efc4) {
            ctx->pc = 0x28EEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eea8;
        }
    }
    ctx->pc = 0x28EFCCu;
    // 0x28efcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efd0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x28EFD0u;
    SET_GPR_U32(ctx, 31, 0x28EFD8u);
    ctx->pc = 0x28EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFD0u;
    // 0x28efd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x28EFD0u, 0x28EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFD8u;
label_28efd8:
    // 0x28efd8: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28efdc: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x28efdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28efe0: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x28efe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28efe4: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x28efe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28efe8: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28efec: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x28efecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28eff0: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x28eff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28eff4: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x28eff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28eff8: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x28eff8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28effc: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x28effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28f000: 0x3e00008  jr          $ra
    ctx->pc = 0x28F000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F000u;
        // 0x28f004: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F008u;
}
