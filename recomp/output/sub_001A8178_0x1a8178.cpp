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

// Function: sub_001A8178
// Address: 0x1a8178 - 0x1a8328
void sub_001A8178_0x1a8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8178_0x1a8178");
#endif

    switch (ctx->pc) {
        case 0x1a81d8u: goto label_1a81d8;
        case 0x1a81e8u: goto label_1a81e8;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a8264u: goto label_1a8264;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a82b8u: goto label_1a82b8;
        case 0x1a82d0u: goto label_1a82d0;
        case 0x1a8304u: goto label_1a8304;
        default: break;
    }

    ctx->pc = 0x1a8178u;

    // 0x1a8178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a817c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8180: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a818c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8190: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8194: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a8194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a8198: 0x8e43014c  lw          $v1, 0x14C($s2)
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x1a819c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1a81a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A81A0u;
    {
        const bool branch_taken_0x1a81a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81A0u;
        // 0x1a81a4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81a0) {
            ctx->pc = 0x1A81B0u;
            goto label_1a81b0;
        }
    }
    ctx->pc = 0x1A81A8u;
    // 0x1a81a8: 0x12600057  beqz        $s3, . + 4 + (0x57 << 2)
    ctx->pc = 0x1A81A8u;
    {
        const bool branch_taken_0x1a81a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81A8u;
        // 0x1a81ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81a8) {
            ctx->pc = 0x1A8308u;
            goto label_1a8308;
        }
    }
    ctx->pc = 0x1A81B0u;
label_1a81b0:
    // 0x1a81b0: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x1a81b4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A81B4u;
    {
        const bool branch_taken_0x1a81b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a81b4) {
            ctx->pc = 0x1A81B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A81B4u;
            // 0x1a81b8: 0x8e43014c  lw          $v1, 0x14C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A82DCu;
            goto label_1a82dc;
        }
    }
    ctx->pc = 0x1A81BCu;
    // 0x1a81bc: 0x8e4401e4  lw          $a0, 0x1E4($s2)
    ctx->pc = 0x1a81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x1a81c0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A81C0u;
    {
        const bool branch_taken_0x1a81c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a81c0) {
            ctx->pc = 0x1A81C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A81C0u;
            // 0x1a81c4: 0x264401ec  addiu       $a0, $s2, 0x1EC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A81F0u;
            goto label_1a81f0;
        }
    }
    ctx->pc = 0x1A81C8u;
    // 0x1a81c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a81cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a81ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a81d0: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A81D0u;
    SET_GPR_U32(ctx, 31, 0x1A81D8u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A81D0u, 0x1A81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81D8u;
label_1a81d8:
    // 0x1a81d8: 0x8e4401e4  lw          $a0, 0x1E4($s2)
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x1a81dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a81dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a81e0: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A81E0u;
    SET_GPR_U32(ctx, 31, 0x1A81E8u);
    ctx->pc = 0x1A81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81E0u;
    // 0x1a81e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A81E0u, 0x1A81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A81E8u;
    {
        const bool branch_taken_0x1a81e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81E8u;
        // 0x1a81ec: 0x8e4401e8  lw          $a0, 0x1E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81e8) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A81F0u;
label_1a81f0:
    // 0x1a81f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a81f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a81f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a81fc: 0x0  nop
    ctx->pc = 0x1a81fcu;
    // NOP
label_1a8200:
    // 0x1a8200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8204u;
    {
        const bool branch_taken_0x1a8204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8204u;
        // 0x1a8208: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8204) {
            ctx->pc = 0x1A8214u;
            goto label_1a8214;
        }
    }
    ctx->pc = 0x1A820Cu;
    // 0x1a820c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1a820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8210: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a8210u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a8214:
    // 0x1a8214: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8214u;
    {
        const bool branch_taken_0x1a8214 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8214u;
        // 0x1a8218: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8214) {
            ctx->pc = 0x1A8200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8200;
        }
    }
    ctx->pc = 0x1A821Cu;
    // 0x1a821c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8224: 0x0  nop
    ctx->pc = 0x1a8224u;
    // NOP
    // 0x1a8228: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a8228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a822c: 0x0  nop
    ctx->pc = 0x1a822cu;
    // NOP
    // 0x1a8230: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1A8230u;
    {
        const bool branch_taken_0x1a8230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8230) {
            ctx->pc = 0x1A8234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8230u;
            // 0x1a8234: 0x8e4401e8  lw          $a0, 0x1E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8238u;
    // 0x1a8238: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a823c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a823cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a8240:
    // 0x1a8240: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a8244: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8244u;
    {
        const bool branch_taken_0x1a8244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8244u;
        // 0x1a8248: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8244) {
            ctx->pc = 0x1A8264u;
            goto label_1a8264;
        }
    }
    ctx->pc = 0x1A824Cu;
    // 0x1a824c: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x1a824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8250: 0x0  nop
    ctx->pc = 0x1a8250u;
    // NOP
    // 0x1a8254: 0x0  nop
    ctx->pc = 0x1a8254u;
    // NOP
    // 0x1a8258: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x1a8258u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x1a825c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A825Cu;
    SET_GPR_U32(ctx, 31, 0x1A8264u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A825Cu, 0x1A8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8264u;
label_1a8264:
    // 0x1a8264: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A8264u;
    {
        const bool branch_taken_0x1a8264 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8264u;
        // 0x1a8268: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8264) {
            ctx->pc = 0x1A8240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8240;
        }
    }
    ctx->pc = 0x1A826Cu;
    // 0x1a826c: 0x8e4401e8  lw          $a0, 0x1E8($s2)
    ctx->pc = 0x1a826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
label_1a8270:
    // 0x1a8270: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8270u;
    {
        const bool branch_taken_0x1a8270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8270) {
            ctx->pc = 0x1A8274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8270u;
            // 0x1a8274: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A828Cu;
            goto label_1a828c;
        }
    }
    ctx->pc = 0x1A8278u;
    // 0x1a8278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a827c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A827Cu;
    SET_GPR_U32(ctx, 31, 0x1A8284u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A827Cu, 0x1A8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8284u;
label_1a8284:
    // 0x1a8284: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8284u;
    {
        const bool branch_taken_0x1a8284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8284u;
        // 0x1a8288: 0x8e43014c  lw          $v1, 0x14C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8284) {
            ctx->pc = 0x1A82DCu;
            goto label_1a82dc;
        }
    }
    ctx->pc = 0x1A828Cu;
label_1a828c:
    // 0x1a828c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a8290: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a8294: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a8294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a8298: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a829c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a82a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a82a4: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A82A4u;
    {
        const bool branch_taken_0x1a82a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a82a4) {
            ctx->pc = 0x1A82A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A82A4u;
            // 0x1a82a8: 0x8e43014c  lw          $v1, 0x14C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A82DCu;
            goto label_1a82dc;
        }
    }
    ctx->pc = 0x1A82ACu;
    // 0x1a82ac: 0x265101ec  addiu       $s1, $s2, 0x1EC
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
    // 0x1a82b0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a82b4: 0x0  nop
    ctx->pc = 0x1a82b4u;
    // NOP
label_1a82b8:
    // 0x1a82b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a82bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A82BCu;
    {
        const bool branch_taken_0x1a82bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82BCu;
        // 0x1a82c0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82bc) {
            ctx->pc = 0x1A82D0u;
            goto label_1a82d0;
        }
    }
    ctx->pc = 0x1A82C4u;
    // 0x1a82c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a82c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a82c8: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A82C8u;
    SET_GPR_U32(ctx, 31, 0x1A82D0u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A82C8u, 0x1A82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82D0u;
label_1a82d0:
    // 0x1a82d0: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A82D0u;
    {
        const bool branch_taken_0x1a82d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82D0u;
        // 0x1a82d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82d0) {
            ctx->pc = 0x1A82B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A82D8u;
    // 0x1a82d8: 0x8e43014c  lw          $v1, 0x14C($s2)
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a82dc:
    // 0x1a82dc: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1a82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1a82e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A82E0u;
    {
        const bool branch_taken_0x1a82e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82E0u;
        // 0x1a82e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82e0) {
            ctx->pc = 0x1A8304u;
            goto label_1a8304;
        }
    }
    ctx->pc = 0x1A82E8u;
    // 0x1a82e8: 0xae530190  sw          $s3, 0x190($s2)
    ctx->pc = 0x1a82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 19));
    // 0x1a82ec: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A82ECu;
    {
        const bool branch_taken_0x1a82ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82ECu;
        // 0x1a82f0: 0xae420160  sw          $v0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82ec) {
            ctx->pc = 0x1A82F8u;
            goto label_1a82f8;
        }
    }
    ctx->pc = 0x1A82F4u;
    // 0x1a82f4: 0xae400168  sw          $zero, 0x168($s2)
    ctx->pc = 0x1a82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 0));
label_1a82f8:
    // 0x1a82f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82fc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A82FCu;
    SET_GPR_U32(ctx, 31, 0x1A8304u);
    ctx->pc = 0x1A8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82FCu;
    // 0x1a8300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A82FCu, 0x1A8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8304u;
label_1a8304:
    // 0x1a8304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8308:
    // 0x1a8308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a830c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a830cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a831c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8320: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8320u;
        // 0x1a8324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8328u;
}
