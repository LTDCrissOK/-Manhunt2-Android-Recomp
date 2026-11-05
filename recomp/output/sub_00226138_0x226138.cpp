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

// Function: sub_00226138
// Address: 0x226138 - 0x226358
void sub_00226138_0x226138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226138_0x226138");
#endif

    switch (ctx->pc) {
        case 0x2261a0u: goto label_2261a0;
        case 0x2261b0u: goto label_2261b0;
        case 0x2261c0u: goto label_2261c0;
        case 0x2261dcu: goto label_2261dc;
        case 0x2261ecu: goto label_2261ec;
        case 0x226218u: goto label_226218;
        case 0x226230u: goto label_226230;
        case 0x2262c4u: goto label_2262c4;
        case 0x2262e0u: goto label_2262e0;
        default: break;
    }

    ctx->pc = 0x226138u;

    // 0x226138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22613c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x226140: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x226140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x226144: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226148: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x226148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22614c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22614cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226150: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x226150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x226154: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x226154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226158: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x226158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22615c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x226160: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x226160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x226164: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x226164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x226168: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x226168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x22616c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x226170: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x226170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x226174: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x226174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x226178: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x22617c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x226180: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x226180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x226184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226184u;
    {
        const bool branch_taken_0x226184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226184u;
        // 0x226188: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226184) {
            ctx->pc = 0x226198u;
            goto label_226198;
        }
    }
    ctx->pc = 0x22618Cu;
    // 0x22618c: 0x8e42074c  lw          $v0, 0x74C($s2)
    ctx->pc = 0x22618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
    // 0x226190: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x226190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x226194: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x226194u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_226198:
    // 0x226198: 0xc076430  jal         func_1D90C0
    ctx->pc = 0x226198u;
    SET_GPR_U32(ctx, 31, 0x2261A0u);
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x226198u, 0x2261A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261A0u;
label_2261a0:
    // 0x2261a0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2261A0u;
    {
        const bool branch_taken_0x2261a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2261a0) {
            ctx->pc = 0x2262F8u;
            goto label_2262f8;
        }
    }
    ctx->pc = 0x2261A8u;
    // 0x2261a8: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x2261A8u;
    SET_GPR_U32(ctx, 31, 0x2261B0u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x2261A8u, 0x2261B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261B0u;
label_2261b0:
    // 0x2261b0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2261B0u;
    {
        const bool branch_taken_0x2261b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261B0u;
        // 0x2261b4: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261b0) {
            ctx->pc = 0x2262D0u;
            goto label_2262d0;
        }
    }
    ctx->pc = 0x2261B8u;
    // 0x2261b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2261B8u;
    {
        const bool branch_taken_0x2261b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261B8u;
        // 0x2261bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261b8) {
            ctx->pc = 0x2261E4u;
            goto label_2261e4;
        }
    }
    ctx->pc = 0x2261C0u;
label_2261c0:
    // 0x2261c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2261c4: 0x8c6591dc  lw          $a1, -0x6E24($v1)
    ctx->pc = 0x2261c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
    // 0x2261c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2261c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2261d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2261d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2261d4: 0xc08996e  jal         func_2265B8
    ctx->pc = 0x2261D4u;
    SET_GPR_U32(ctx, 31, 0x2261DCu);
    ctx->pc = 0x2261D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261D4u;
    // 0x2261d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265B8u, 0x2261D4u, 0x2261DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261DCu;
label_2261dc:
    // 0x2261dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2261e0: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x2261e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2261e4:
    // 0x2261e4: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x2261E4u, 0x2261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2261ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2261f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2261F0u;
    {
        const bool branch_taken_0x2261f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2261F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261F0u;
        // 0x2261f4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261f0) {
            ctx->pc = 0x2261C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2261c0;
        }
    }
    ctx->pc = 0x2261F8u;
    // 0x2261f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2261f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2261fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2261fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226204: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x226208: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22620c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x22620Cu;
    {
        const bool branch_taken_0x22620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22620Cu;
        // 0x226210: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22620c) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x226214u;
    // 0x226214: 0x0  nop
    ctx->pc = 0x226214u;
    // NOP
label_226218:
    // 0x226218: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22621c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226224: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x226224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226228: 0xc083c52  jal         func_20F148
    ctx->pc = 0x226228u;
    SET_GPR_U32(ctx, 31, 0x226230u);
    ctx->pc = 0x22622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226228u;
    // 0x22622c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F148u, 0x226228u, 0x226230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226230u;
label_226230:
    // 0x226230: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x226230u;
    {
        const bool branch_taken_0x226230 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x226230) {
            ctx->pc = 0x226234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226230u;
            // 0x226234: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226250u;
            goto label_226250;
        }
    }
    ctx->pc = 0x226238u;
    // 0x226238: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x226238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22623c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22623cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226240: 0x0  nop
    ctx->pc = 0x226240u;
    // NOP
    // 0x226244: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x226244u;
    {
        const bool branch_taken_0x226244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226244) {
            ctx->pc = 0x226248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226244u;
            // 0x226248: 0xae170030  sw          $s7, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22624Cu;
            goto label_22624c;
        }
    }
    ctx->pc = 0x22624Cu;
label_22624c:
    // 0x22624c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_226250:
    // 0x226250: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x226250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x226254: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x226254u;
    {
        const bool branch_taken_0x226254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226254) {
            ctx->pc = 0x226258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226254u;
            // 0x226258: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x22625Cu;
    // 0x22625c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x226260: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x226260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x226264: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x226264u;
    {
        const bool branch_taken_0x226264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226264) {
            ctx->pc = 0x226268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226264u;
            // 0x226268: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226298u;
            goto label_226298;
        }
    }
    ctx->pc = 0x22626Cu;
    // 0x22626c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x226270: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x226270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x226274: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226274u;
    {
        const bool branch_taken_0x226274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226274u;
        // 0x226278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226274) {
            ctx->pc = 0x226294u;
            goto label_226294;
        }
    }
    ctx->pc = 0x22627Cu;
    // 0x22627c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x22627cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x226280: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x226284: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x226288: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x22628c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22628Cu;
    {
        const bool branch_taken_0x22628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22628c) {
            ctx->pc = 0x226290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22628Cu;
            // 0x226290: 0xae16003c  sw          $s6, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226294u;
            goto label_226294;
        }
    }
    ctx->pc = 0x226294u;
label_226294:
    // 0x226294: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_226298:
    // 0x226298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226298u;
    {
        const bool branch_taken_0x226298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226298u;
        // 0x22629c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226298) {
            ctx->pc = 0x2262ACu;
            goto label_2262ac;
        }
    }
    ctx->pc = 0x2262A0u;
    // 0x2262a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2262a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2262a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2262A4u;
    {
        const bool branch_taken_0x2262a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262A4u;
        // 0x2262a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262a4) {
            ctx->pc = 0x2262B8u;
            goto label_2262b8;
        }
    }
    ctx->pc = 0x2262ACu;
label_2262ac:
    // 0x2262ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2262b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2262b4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2262b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2262b8:
    // 0x2262b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2262b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2262bc:
    // 0x2262bc: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x2262BCu;
    SET_GPR_U32(ctx, 31, 0x2262C4u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x2262BCu, 0x2262C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262C4u;
label_2262c4:
    // 0x2262c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2262c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2262c8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2262C8u;
    {
        const bool branch_taken_0x2262c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C8u;
        // 0x2262cc: 0x8fc391dc  lw          $v1, -0x6E24($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262c8) {
            ctx->pc = 0x226218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226218;
        }
    }
    ctx->pc = 0x2262D0u;
label_2262d0:
    // 0x2262d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2262d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2262d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262d8: 0xc083c9e  jal         func_20F278
    ctx->pc = 0x2262D8u;
    SET_GPR_U32(ctx, 31, 0x2262E0u);
    ctx->pc = 0x2262DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262D8u;
    // 0x2262dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F278u, 0x2262D8u, 0x2262E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262E0u;
label_2262e0:
    // 0x2262e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2262E4u;
    {
        const bool branch_taken_0x2262e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262E4u;
        // 0x2262e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262e4) {
            ctx->pc = 0x226314u;
            goto label_226314;
        }
    }
    ctx->pc = 0x2262ECu;
    // 0x2262ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2262ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2262f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2262F0u;
    {
        const bool branch_taken_0x2262f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262F0u;
        // 0x2262f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262f0) {
            ctx->pc = 0x226314u;
            goto label_226314;
        }
    }
    ctx->pc = 0x2262F8u;
label_2262f8:
    // 0x2262f8: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2262F8u;
    {
        const bool branch_taken_0x2262f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262F8u;
        // 0x2262fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262f8) {
            ctx->pc = 0x226314u;
            goto label_226314;
        }
    }
    ctx->pc = 0x226300u;
    // 0x226300: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x226300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x226304: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x226304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x226308: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226308u;
    {
        const bool branch_taken_0x226308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226308) {
            ctx->pc = 0x22630Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226308u;
            // 0x22630c: 0xae401394  sw          $zero, 0x1394($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 5012), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226310u;
            goto label_226310;
        }
    }
    ctx->pc = 0x226310u;
label_226310:
    // 0x226310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226314:
    // 0x226314: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x226314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226318: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x226318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22631c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22631cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226320: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x226320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226324: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x226324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226328: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x226328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22632c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22632cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226330: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x226330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x226334: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226338: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x226338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22633c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226340: 0x3e00008  jr          $ra
    ctx->pc = 0x226340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226340u;
        // 0x226344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226348u;
    // 0x226348: 0x27bd0dc0  addiu       $sp, $sp, 0xDC0
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3520));
    // 0x22634c: 0x0  nop
    ctx->pc = 0x22634cu;
    // NOP
    // 0x226350: 0x27bd0db0  addiu       $sp, $sp, 0xDB0
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3504));
    // 0x226354: 0x0  nop
    ctx->pc = 0x226354u;
    // NOP
    ctx->pc = 0x226358u;
}
