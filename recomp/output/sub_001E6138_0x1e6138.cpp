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

// Function: sub_001E6138
// Address: 0x1e6138 - 0x1e62b0
void sub_001E6138_0x1e6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6138_0x1e6138");
#endif

    switch (ctx->pc) {
        case 0x1e6188u: goto label_1e6188;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e6210u: goto label_1e6210;
        default: break;
    }

    ctx->pc = 0x1e6138u;

    // 0x1e6138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e613c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e6140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e6144: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e6144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e6148: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e614c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e6150: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6154: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e6158: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e6158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e615c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e6160: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e6160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6164: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e6164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e6168: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e616c: 0xc440d948  lwc1        $f0, -0x26B8($v0)
    ctx->pc = 0x1e616cu;
    { uint32_t bits = FAST_READ32(0x45D948u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6170: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e6174: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E6174u;
    {
        const bool branch_taken_0x1e6174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6174u;
        // 0x1e6178: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6174) {
            ctx->pc = 0x1E6284u;
            goto label_1e6284;
        }
    }
    ctx->pc = 0x1E617Cu;
    // 0x1e617c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1e6180: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e6184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e6188:
    // 0x1e6188: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6188u;
    SET_GPR_U32(ctx, 31, 0x1E6190u);
    ctx->pc = 0x1E618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6188u;
    // 0x1e618c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6188u, 0x1E6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6190u;
label_1e6190:
    // 0x1e6190: 0x8e0391e0  lw          $v1, -0x6E20($s0)
    ctx->pc = 0x1e6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6198: 0x8e4291dc  lw          $v0, -0x6E24($s2)
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e619c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e619cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e61a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e61a8: 0xc07a4f4  jal         func_1E93D0
    ctx->pc = 0x1E61A8u;
    SET_GPR_U32(ctx, 31, 0x1E61B0u);
    ctx->pc = 0x1E61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61A8u;
    // 0x1e61ac: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93D0u, 0x1E61A8u, 0x1E61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61B0u;
label_1e61b0:
    // 0x1e61b0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E61B0u;
    {
        const bool branch_taken_0x1e61b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61B0u;
        // 0x1e61b4: 0x8e0291e0  lw          $v0, -0x6E20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61b0) {
            ctx->pc = 0x1E6270u;
            goto label_1e6270;
        }
    }
    ctx->pc = 0x1E61B8u;
    // 0x1e61b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e61b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e61bc: 0x8e4391dc  lw          $v1, -0x6E24($s2)
    ctx->pc = 0x1e61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e61c0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1e61c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e61c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e61c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e61c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e61d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e61d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e61d8: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1e61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1e61dc: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e61e0: 0x8e4691dc  lw          $a2, -0x6E24($s2)
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e61e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e61e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e61ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e61f0: 0xac740028  sw          $s4, 0x28($v1)
    ctx->pc = 0x1e61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 20));
    // 0x1e61f4: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e61f8: 0x8e4691dc  lw          $a2, -0x6E24($s2)
    ctx->pc = 0x1e61f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e61fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6200: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6208: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6208u;
    SET_GPR_U32(ctx, 31, 0x1E6210u);
    ctx->pc = 0x1E620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6208u;
    // 0x1e620c: 0xac670038  sw          $a3, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6208u, 0x1E6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6210u;
label_1e6210:
    // 0x1e6210: 0x8e0491e0  lw          $a0, -0x6E20($s0)
    ctx->pc = 0x1e6210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6214: 0x8e4591dc  lw          $a1, -0x6E24($s2)
    ctx->pc = 0x1e6214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e6218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e6218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e621c: 0xc6a1d948  lwc1        $f1, -0x26B8($s5)
    ctx->pc = 0x1e621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294957384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6220: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e6220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6224: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6228: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1e6228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1e622c: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6230: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e6234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6238: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e623c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6244: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e6248: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e624c: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1e624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1e6250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6254: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e625c: 0xac74003c  sw          $s4, 0x3C($v1)
    ctx->pc = 0x1e625cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 20));
    // 0x1e6260: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e6260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e6264: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e626c: 0xae0291e0  sw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e626cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939104), GPR_U32(ctx, 2));
label_1e6270:
    // 0x1e6270: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e6274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e6278: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e6278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e627c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1E627Cu;
    {
        const bool branch_taken_0x1e627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E627Cu;
        // 0x1e6280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e627c) {
            ctx->pc = 0x1E6188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6188;
        }
    }
    ctx->pc = 0x1E6284u;
label_1e6284:
    // 0x1e6284: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e6288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e628c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e628cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e6290: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e6290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6294: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e6294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6298: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e6298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e629c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e629cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e62a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e62a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e62a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e62a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e62a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E62A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E62B0u;
}
