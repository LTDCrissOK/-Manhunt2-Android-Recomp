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

// Function: sub_0019A870
// Address: 0x19a870 - 0x19a9e8
void sub_0019A870_0x19a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A870_0x19a870");
#endif

    switch (ctx->pc) {
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8bcu: goto label_19a8bc;
        case 0x19a8ccu: goto label_19a8cc;
        case 0x19a8f8u: goto label_19a8f8;
        case 0x19a908u: goto label_19a908;
        case 0x19a954u: goto label_19a954;
        case 0x19a980u: goto label_19a980;
        case 0x19a988u: goto label_19a988;
        case 0x19a990u: goto label_19a990;
        case 0x19a9b8u: goto label_19a9b8;
        case 0x19a9c8u: goto label_19a9c8;
        default: break;
    }

    ctx->pc = 0x19a870u;

    // 0x19a870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a880: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19a880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a884: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x19a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a888: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x19a88c: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x19a88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x19a890: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A890u;
    {
        const bool branch_taken_0x19a890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A890u;
        // 0x19a894: 0x38420004  xori        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a890) {
            ctx->pc = 0x19A8A8u;
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A898u;
    // 0x19a898: 0xc067258  jal         func_19C960
    ctx->pc = 0x19A898u;
    SET_GPR_U32(ctx, 31, 0x19A8A0u);
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19A898u, 0x19A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8A0u;
label_19a8a0:
    // 0x19a8a0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x19A8A0u;
    {
        const bool branch_taken_0x19a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A0u;
        // 0x19a8a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a0) {
            ctx->pc = 0x19A9D4u;
            goto label_19a9d4;
        }
    }
    ctx->pc = 0x19A8A8u;
label_19a8a8:
    // 0x19a8a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A8A8u;
    {
        const bool branch_taken_0x19a8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A8u;
        // 0x19a8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a8) {
            ctx->pc = 0x19A8C4u;
            goto label_19a8c4;
        }
    }
    ctx->pc = 0x19A8B0u;
    // 0x19a8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8b4: 0xc06724e  jal         func_19C938
    ctx->pc = 0x19A8B4u;
    SET_GPR_U32(ctx, 31, 0x19A8BCu);
    ctx->pc = 0x19A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8B4u;
    // 0x19a8b8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C938u, 0x19A8B4u, 0x19A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8BCu;
label_19a8bc:
    // 0x19a8bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x19A8BCu;
    {
        const bool branch_taken_0x19a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8BCu;
        // 0x19a8c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8bc) {
            ctx->pc = 0x19A9D4u;
            goto label_19a9d4;
        }
    }
    ctx->pc = 0x19A8C4u;
label_19a8c4:
    // 0x19a8c4: 0xc064c10  jal         func_193040
    ctx->pc = 0x19A8C4u;
    SET_GPR_U32(ctx, 31, 0x19A8CCu);
    ctx->pc = 0x19A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8C4u;
    // 0x19a8c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193040u, 0x19A8C4u, 0x19A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8CCu;
label_19a8cc:
    // 0x19a8cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19A8CCu;
    {
        const bool branch_taken_0x19a8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a8cc) {
            ctx->pc = 0x19A900u;
            goto label_19a900;
        }
    }
    ctx->pc = 0x19A8D4u;
    // 0x19a8d4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a8d8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19a8dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a8e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A8E0u;
    {
        const bool branch_taken_0x19a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8E0u;
        // 0x19a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8e0) {
            ctx->pc = 0x19A900u;
            goto label_19a900;
        }
    }
    ctx->pc = 0x19A8E8u;
    // 0x19a8e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19a8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a8ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a8f0: 0xc0671ca  jal         func_19C728
    ctx->pc = 0x19A8F0u;
    SET_GPR_U32(ctx, 31, 0x19A8F8u);
    ctx->pc = 0x19A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8F0u;
    // 0x19a8f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C728u, 0x19A8F0u, 0x19A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8F8u;
label_19a8f8:
    // 0x19a8f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x19A8F8u;
    {
        const bool branch_taken_0x19a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8F8u;
        // 0x19a8fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8f8) {
            ctx->pc = 0x19A9D4u;
            goto label_19a9d4;
        }
    }
    ctx->pc = 0x19A900u;
label_19a900:
    // 0x19a900: 0xc061a26  jal         func_186898
    ctx->pc = 0x19A900u;
    SET_GPR_U32(ctx, 31, 0x19A908u);
    ctx->pc = 0x19A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A900u;
    // 0x19a904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19A900u, 0x19A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A908u;
label_19a908:
    // 0x19a908: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a90c: 0xc4540138  lwc1        $f20, 0x138($v0)
    ctx->pc = 0x19a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a910: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19a914: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a918: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19A918u;
    {
        const bool branch_taken_0x19a918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a918) {
            ctx->pc = 0x19A988u;
            goto label_19a988;
        }
    }
    ctx->pc = 0x19A920u;
    // 0x19a920: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19a924: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a928: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19A928u;
    {
        const bool branch_taken_0x19a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a928) {
            ctx->pc = 0x19A988u;
            goto label_19a988;
        }
    }
    ctx->pc = 0x19A930u;
    // 0x19a930: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x19a934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a938: 0x0  nop
    ctx->pc = 0x19a938u;
    // NOP
    // 0x19a93c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x19a93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a940: 0x0  nop
    ctx->pc = 0x19a940u;
    // NOP
    // 0x19a944: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A944u;
    {
        const bool branch_taken_0x19a944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a944) {
            ctx->pc = 0x19A95Cu;
            goto label_19a95c;
        }
    }
    ctx->pc = 0x19A94Cu;
    // 0x19a94c: 0xc064c10  jal         func_193040
    ctx->pc = 0x19A94Cu;
    SET_GPR_U32(ctx, 31, 0x19A954u);
    ctx->pc = 0x19A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A94Cu;
    // 0x19a950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193040u, 0x19A94Cu, 0x19A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A954u;
label_19a954:
    // 0x19a954: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A954u;
    {
        const bool branch_taken_0x19a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a954) {
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A95Cu;
label_19a95c:
    // 0x19a95c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19a960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a964: 0x0  nop
    ctx->pc = 0x19a964u;
    // NOP
    // 0x19a968: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x19a968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a96c: 0x0  nop
    ctx->pc = 0x19a96cu;
    // NOP
    // 0x19a970: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A970u;
    {
        const bool branch_taken_0x19a970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a970) {
            ctx->pc = 0x19A988u;
            goto label_19a988;
        }
    }
    ctx->pc = 0x19A978u;
label_19a978:
    // 0x19a978: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A978u;
    SET_GPR_U32(ctx, 31, 0x19A980u);
    ctx->pc = 0x19A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A978u;
    // 0x19a97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A978u, 0x19A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A980u;
label_19a980:
    // 0x19a980: 0xc06d9ea  jal         func_1B67A8
    ctx->pc = 0x19A980u;
    SET_GPR_U32(ctx, 31, 0x19A988u);
    ctx->pc = 0x19A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A980u;
    // 0x19a984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67A8u, 0x19A980u, 0x19A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A988u;
label_19a988:
    // 0x19a988: 0xc065976  jal         func_1965D8
    ctx->pc = 0x19A988u;
    SET_GPR_U32(ctx, 31, 0x19A990u);
    ctx->pc = 0x19A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A988u;
    // 0x19a98c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965D8u, 0x19A988u, 0x19A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A990u;
label_19a990:
    // 0x19a990: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A990u;
    {
        const bool branch_taken_0x19a990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a990) {
            ctx->pc = 0x19A9ACu;
            goto label_19a9ac;
        }
    }
    ctx->pc = 0x19A998u;
    // 0x19a998: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a99c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19a9a0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x19a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x19a9a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A9A4u;
    {
        const bool branch_taken_0x19a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A4u;
        // 0x19a9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9a4) {
            ctx->pc = 0x19A9C0u;
            goto label_19a9c0;
        }
    }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9b0: 0xc067598  jal         func_19D660
    ctx->pc = 0x19A9B0u;
    SET_GPR_U32(ctx, 31, 0x19A9B8u);
    ctx->pc = 0x19A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9B0u;
    // 0x19a9b4: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19A9B0u, 0x19A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9B8u;
label_19a9b8:
    // 0x19a9b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A9B8u;
    {
        const bool branch_taken_0x19a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9B8u;
        // 0x19a9bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9b8) {
            ctx->pc = 0x19A9D4u;
            goto label_19a9d4;
        }
    }
    ctx->pc = 0x19A9C0u;
label_19a9c0:
    // 0x19a9c0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A9C0u;
    SET_GPR_U32(ctx, 31, 0x19A9C8u);
    ctx->pc = 0x19A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9C0u;
    // 0x19a9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A9C0u, 0x19A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9C8u;
label_19a9c8:
    // 0x19a9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a9cc: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x19a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    // 0x19a9d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a9d4:
    // 0x19a9d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a9d8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9DCu;
        // 0x19a9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A9E4u;
    // 0x19a9e4: 0x0  nop
    ctx->pc = 0x19a9e4u;
    // NOP
    ctx->pc = 0x19a9e8u;
}
