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

// Function: sub_001C4158
// Address: 0x1c4158 - 0x1c4278
void sub_001C4158_0x1c4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4158_0x1c4158");
#endif

    switch (ctx->pc) {
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c422cu: goto label_1c422c;
        case 0x1c4238u: goto label_1c4238;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c4258u: goto label_1c4258;
        default: break;
    }

    ctx->pc = 0x1c4158u;

    // 0x1c4158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c415c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c4160: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c4160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c416c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c4170: 0x8e230488  lw          $v1, 0x488($s1)
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1160)));
    // 0x1c4174: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4174u;
    {
        const bool branch_taken_0x1c4174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4174u;
        // 0x1c4178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4174) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C417Cu;
    // 0x1c417c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C417Cu;
    {
        const bool branch_taken_0x1c417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C417Cu;
        // 0x1c4180: 0xae200470  sw          $zero, 0x470($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c417c) {
            ctx->pc = 0x1C4258u;
            goto label_1c4258;
        }
    }
    ctx->pc = 0x1C4184u;
label_1c4184:
    // 0x1c4184: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C4184u;
    {
        const bool branch_taken_0x1c4184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4184u;
        // 0x1c4188: 0x26300478  addiu       $s0, $s1, 0x478 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4184) {
            ctx->pc = 0x1C41F0u;
            goto label_1c41f0;
        }
    }
    ctx->pc = 0x1C418Cu;
    // 0x1c418c: 0x26320488  addiu       $s2, $s1, 0x488
    ctx->pc = 0x1c418cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1160));
    // 0x1c4190: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4194: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4194u;
    {
        const bool branch_taken_0x1c4194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4194u;
        // 0x1c4198: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4194) {
            ctx->pc = 0x1C41B8u;
            goto label_1c41b8;
        }
    }
    ctx->pc = 0x1C419Cu;
    // 0x1c419c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c41a0:
    // 0x1c41a0: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C41A0u;
    SET_GPR_U32(ctx, 31, 0x1C41A8u);
    ctx->pc = 0x1C41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41A0u;
    // 0x1c41a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C41A0u, 0x1C41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41A8u;
label_1c41a8:
    // 0x1c41a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c41ac: 0x0  nop
    ctx->pc = 0x1c41acu;
    // NOP
    // 0x1c41b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C41B0u;
    {
        const bool branch_taken_0x1c41b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c41b0) {
            ctx->pc = 0x1C41B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C41B0u;
            // 0x1c41b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C41A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c41a0;
        }
    }
    ctx->pc = 0x1C41B8u;
label_1c41b8:
    // 0x1c41b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c41bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c41c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c41c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c41c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c41cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C41CCu;
    {
        const bool branch_taken_0x1c41cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41CCu;
        // 0x1c41d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41cc) {
            ctx->pc = 0x1C41D8u;
            goto label_1c41d8;
        }
    }
    ctx->pc = 0x1C41D4u;
    // 0x1c41d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c41d8:
    // 0x1c41d8: 0xae240450  sw          $a0, 0x450($s1)
    ctx->pc = 0x1c41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 4));
    // 0x1c41dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c41e0: 0x8c821000  lw          $v0, 0x1000($a0)
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x1c41e4: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1c41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1c41e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C41E8u;
    {
        const bool branch_taken_0x1c41e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41E8u;
        // 0x1c41ec: 0xae230470  sw          $v1, 0x470($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41e8) {
            ctx->pc = 0x1C4258u;
            goto label_1c4258;
        }
    }
    ctx->pc = 0x1C41F0u;
label_1c41f0:
    // 0x1c41f0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C41F0u;
    {
        const bool branch_taken_0x1c41f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c41f0) {
            ctx->pc = 0x1C4224u;
            goto label_1c4224;
        }
    }
    ctx->pc = 0x1C41F8u;
    // 0x1c41f8: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x1c41fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c41fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4200: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
    // 0x1c4204: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1c4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4208: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c4208u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c420c: 0x0  nop
    ctx->pc = 0x1c420cu;
    // NOP
    // 0x1c4210: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4210u;
    {
        const bool branch_taken_0x1c4210 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4210u;
        // 0x1c4214: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4210) {
            ctx->pc = 0x1C421Cu;
            goto label_1c421c;
        }
    }
    ctx->pc = 0x1C4218u;
    // 0x1c4218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c421c:
    // 0x1c421c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C421Cu;
    {
        const bool branch_taken_0x1c421c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C421Cu;
        // 0x1c4220: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c421c) {
            ctx->pc = 0x1C4230u;
            goto label_1c4230;
        }
    }
    ctx->pc = 0x1C4224u;
label_1c4224:
    // 0x1c4224: 0xc07109e  jal         func_1C4278
    ctx->pc = 0x1C4224u;
    SET_GPR_U32(ctx, 31, 0x1C422Cu);
    ctx->pc = 0x1C4228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4224u;
    // 0x1c4228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4278u, 0x1C4224u, 0x1C422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C422Cu;
label_1c422c:
    // 0x1c422c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c4230:
    // 0x1c4230: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4230u;
    SET_GPR_U32(ctx, 31, 0x1C4238u);
    ctx->pc = 0x1C4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4230u;
    // 0x1c4234: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4230u, 0x1C4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4238u;
label_1c4238:
    // 0x1c4238: 0x8e250450  lw          $a1, 0x450($s1)
    ctx->pc = 0x1c4238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x1c423c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4240: 0xc06e1c4  jal         func_1B8710
    ctx->pc = 0x1C4240u;
    SET_GPR_U32(ctx, 31, 0x1C4248u);
    ctx->pc = 0x1C4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4240u;
    // 0x1c4244: 0x8e260470  lw          $a2, 0x470($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8710u, 0x1C4240u, 0x1C4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4248u;
label_1c4248:
    // 0x1c4248: 0x8e260470  lw          $a2, 0x470($s1)
    ctx->pc = 0x1c4248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
    // 0x1c424c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4250: 0xc06e4fe  jal         func_1B93F8
    ctx->pc = 0x1C4250u;
    SET_GPR_U32(ctx, 31, 0x1C4258u);
    ctx->pc = 0x1C4254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4250u;
    // 0x1c4254: 0x26250450  addiu       $a1, $s1, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93F8u, 0x1C4250u, 0x1C4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4258u;
label_1c4258:
    // 0x1c4258: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c4258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c425c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c425cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c4260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4264: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c4264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4268: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4268u;
        // 0x1c426c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4270u;
    // 0x1c4270: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c4270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4274: 0x0  nop
    ctx->pc = 0x1c4274u;
    // NOP
    ctx->pc = 0x1c4278u;
}
