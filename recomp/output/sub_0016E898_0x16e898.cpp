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

// Function: sub_0016E898
// Address: 0x16e898 - 0x16ea18
void sub_0016E898_0x16e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E898_0x16e898");
#endif

    switch (ctx->pc) {
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e908u: goto label_16e908;
        case 0x16e968u: goto label_16e968;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e9a4u: goto label_16e9a4;
        case 0x16e9bcu: goto label_16e9bc;
        case 0x16e9dcu: goto label_16e9dc;
        case 0x16e9f8u: goto label_16e9f8;
        default: break;
    }

    ctx->pc = 0x16e898u;

    // 0x16e898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e89c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16e8a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16e8a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16e8ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16e8b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16e8b4: 0xc05a618  jal         func_169860
    ctx->pc = 0x16E8B4u;
    SET_GPR_U32(ctx, 31, 0x16E8BCu);
    ctx->pc = 0x16E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8B4u;
    // 0x16e8b8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16E8B4u, 0x16E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8BCu;
label_16e8bc:
    // 0x16e8bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16e8bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8c0: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x16E8C0u;
    {
        const bool branch_taken_0x16e8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C0u;
        // 0x16e8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c0) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E8C8u;
    // 0x16e8c8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16e8cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e8d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16e8d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8d4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16e8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e8dc: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16e8e0: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x16E8E0u;
    {
        const bool branch_taken_0x16e8e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8E0u;
        // 0x16e8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8e0) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E8E8u;
    // 0x16e8e8: 0xc0439a4  jal         func_10E690
    ctx->pc = 0x16E8E8u;
    SET_GPR_U32(ctx, 31, 0x16E8F0u);
    ctx->pc = 0x16E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8E8u;
    // 0x16e8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E690u, 0x16E8E8u, 0x16E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8F0u;
label_16e8f0:
    // 0x16e8f0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x16E8F0u;
    {
        const bool branch_taken_0x16e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F0u;
        // 0x16e8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8f0) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E8F8u;
    // 0x16e8f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16e8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e900: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x16E900u;
    SET_GPR_U32(ctx, 31, 0x16E908u);
    ctx->pc = 0x16E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E900u;
    // 0x16e904: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ECA0u, 0x16E900u, 0x16E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E908u;
label_16e908:
    // 0x16e908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e90c: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x16E90Cu;
    {
        const bool branch_taken_0x16e90c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E90Cu;
        // 0x16e910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e90c) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E914u;
    // 0x16e914: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x16e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x16e918: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x16e918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x16e91c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16e91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e920: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16e924: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x16e924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16e928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E928u;
    {
        const bool branch_taken_0x16e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E928u;
        // 0x16e92c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e928) {
            ctx->pc = 0x16E944u;
            goto label_16e944;
        }
    }
    ctx->pc = 0x16E930u;
    // 0x16e930: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E930u;
    {
        const bool branch_taken_0x16e930 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E930u;
        // 0x16e934: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e930) {
            ctx->pc = 0x16E948u;
            goto label_16e948;
        }
    }
    ctx->pc = 0x16E938u;
    // 0x16e938: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x16e938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x16e93c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16e93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e944:
    // 0x16e944: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e948:
    // 0x16e948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e94c: 0x0  nop
    ctx->pc = 0x16e94cu;
    // NOP
    // 0x16e950: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x16E950u;
    {
        const bool branch_taken_0x16e950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E950u;
        // 0x16e954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e950) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E958u;
    // 0x16e958: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x16E958u;
    {
        const bool branch_taken_0x16e958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e958) {
            ctx->pc = 0x16E95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E958u;
            // 0x16e95c: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9CCu;
            goto label_16e9cc;
        }
    }
    ctx->pc = 0x16E960u;
    // 0x16e960: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x16E960u;
    SET_GPR_U32(ctx, 31, 0x16E968u);
    ctx->pc = 0x16E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E960u;
    // 0x16e964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x16E960u, 0x16E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E968u;
label_16e968:
    // 0x16e968: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16E968u;
    {
        const bool branch_taken_0x16e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E968u;
        // 0x16e96c: 0x26629a08  addiu       $v0, $s3, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e968) {
            ctx->pc = 0x16E9F0u;
            goto label_16e9f0;
        }
    }
    ctx->pc = 0x16E970u;
    // 0x16e970: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16e974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e978: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16e97c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16E97Cu;
    {
        const bool branch_taken_0x16e97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E97Cu;
        // 0x16e980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e97c) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E984u;
    // 0x16e984: 0xc043996  jal         func_10E658
    ctx->pc = 0x16E984u;
    SET_GPR_U32(ctx, 31, 0x16E98Cu);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x16E984u, 0x16E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E98Cu;
label_16e98c:
    // 0x16e98c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16E98Cu;
    {
        const bool branch_taken_0x16e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E98Cu;
        // 0x16e990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e98c) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E994u;
    // 0x16e994: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16e994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x16e998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16e998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16e99c: 0xc05bbf6  jal         func_16EFD8
    ctx->pc = 0x16E99Cu;
    SET_GPR_U32(ctx, 31, 0x16E9A4u);
    ctx->pc = 0x16E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E99Cu;
    // 0x16e9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EFD8u, 0x16E99Cu, 0x16E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9A4u;
label_16e9a4:
    // 0x16e9a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E9A4u;
    {
        const bool branch_taken_0x16e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9A4u;
        // 0x16e9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9a4) {
            ctx->pc = 0x16E9B4u;
            goto label_16e9b4;
        }
    }
    ctx->pc = 0x16E9ACu;
    // 0x16e9ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16E9ACu;
    {
        const bool branch_taken_0x16e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9ACu;
        // 0x16e9b0: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9ac) {
            ctx->pc = 0x16E9BCu;
            goto label_16e9bc;
        }
    }
    ctx->pc = 0x16E9B4u;
label_16e9b4:
    // 0x16e9b4: 0xc05bbd8  jal         func_16EF60
    ctx->pc = 0x16E9B4u;
    SET_GPR_U32(ctx, 31, 0x16E9BCu);
    ctx->pc = 0x16E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9B4u;
    // 0x16e9b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EF60u, 0x16E9B4u, 0x16E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9BCu;
label_16e9bc:
    // 0x16e9bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16E9BCu;
    {
        const bool branch_taken_0x16e9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e9bc) {
            ctx->pc = 0x16E9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E9BCu;
            // 0x16e9c0: 0xae1200fc  sw          $s2, 0xFC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9E8u;
            goto label_16e9e8;
        }
    }
    ctx->pc = 0x16E9C4u;
    // 0x16e9c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16E9C4u;
    {
        const bool branch_taken_0x16e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9C4u;
        // 0x16e9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9c4) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E9CCu;
label_16e9cc:
    // 0x16e9cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E9CCu;
    {
        const bool branch_taken_0x16e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9cc) {
            ctx->pc = 0x16E9F0u;
            goto label_16e9f0;
        }
    }
    ctx->pc = 0x16E9D4u;
    // 0x16e9d4: 0xc043996  jal         func_10E658
    ctx->pc = 0x16E9D4u;
    SET_GPR_U32(ctx, 31, 0x16E9DCu);
    ctx->pc = 0x16E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9D4u;
    // 0x16e9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x16E9D4u, 0x16E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9DCu;
label_16e9dc:
    // 0x16e9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E9DCu;
    {
        const bool branch_taken_0x16e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9dc) {
            ctx->pc = 0x16E9F0u;
            goto label_16e9f0;
        }
    }
    ctx->pc = 0x16E9E4u;
    // 0x16e9e4: 0xae1200fc  sw          $s2, 0xFC($s0)
    ctx->pc = 0x16e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 18));
label_16e9e8:
    // 0x16e9e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E9E8u;
    {
        const bool branch_taken_0x16e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9E8u;
        // 0x16e9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9e8) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E9F0u;
label_16e9f0:
    // 0x16e9f0: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16E9F0u;
    SET_GPR_U32(ctx, 31, 0x16E9F8u);
    ctx->pc = 0x16E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9F0u;
    // 0x16e9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2F0u, 0x16E9F0u, 0x16E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9F8u;
label_16e9f8:
    // 0x16e9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16e9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e9fc:
    // 0x16e9fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16e9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ea00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16ea00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ea04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ea08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ea0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ea10: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA10u;
        // 0x16ea14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA18u;
}
