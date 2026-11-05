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

// Function: sub_002F9138
// Address: 0x2f9138 - 0x2f9310
void sub_002F9138_0x2f9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9138_0x2f9138");
#endif

    switch (ctx->pc) {
        case 0x2f91bcu: goto label_2f91bc;
        case 0x2f91d0u: goto label_2f91d0;
        case 0x2f9218u: goto label_2f9218;
        case 0x2f9274u: goto label_2f9274;
        case 0x2f9290u: goto label_2f9290;
        case 0x2f92d8u: goto label_2f92d8;
        case 0x2f92e8u: goto label_2f92e8;
        default: break;
    }

    ctx->pc = 0x2f9138u;

    // 0x2f9138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f913c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9140: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f9140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f9144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9148: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f9148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f914c: 0x920211bc  lbu         $v0, 0x11BC($s0)
    ctx->pc = 0x2f914cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4540)));
    // 0x2f9150: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F9150u;
    {
        const bool branch_taken_0x2f9150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9150u;
        // 0x2f9154: 0x240200f3  addiu       $v0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9150) {
            ctx->pc = 0x2F92F4u;
            goto label_2f92f4;
        }
    }
    ctx->pc = 0x2F9158u;
    // 0x2f9158: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x2f9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f915c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2f915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2f9160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f9160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f9164: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f9168: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f9168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f916c: 0x14820060  bne         $a0, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2F916Cu;
    {
        const bool branch_taken_0x2f916c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F916Cu;
        // 0x2f9170: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f916c) {
            ctx->pc = 0x2F92F0u;
            goto label_2f92f0;
        }
    }
    ctx->pc = 0x2F9174u;
    // 0x2f9174: 0x8ca401e4  lw          $a0, 0x1E4($a1)
    ctx->pc = 0x2f9174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2f9178: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x2f9178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2f917c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f9180: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F9180u;
    {
        const bool branch_taken_0x2f9180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9180) {
            ctx->pc = 0x2F9184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9180u;
            // 0x2f9184: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92E0u;
            goto label_2f92e0;
        }
    }
    ctx->pc = 0x2F9188u;
    // 0x2f9188: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x2f9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    // 0x2f918c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F918Cu;
    {
        const bool branch_taken_0x2f918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F918Cu;
        // 0x2f9190: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f918c) {
            ctx->pc = 0x2F92F4u;
            goto label_2f92f4;
        }
    }
    ctx->pc = 0x2F9194u;
    // 0x2f9194: 0x8c4600b8  lw          $a2, 0xB8($v0)
    ctx->pc = 0x2f9194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2f9198: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f9198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f919c: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x2f919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x2f91a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f91a4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F91A4u;
    {
        const bool branch_taken_0x2f91a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f91a4) {
            ctx->pc = 0x2F91A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91A4u;
            // 0x2f91a8: 0xc4d40170  lwc1        $f20, 0x170($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F91ACu;
            goto label_2f91ac;
        }
    }
    ctx->pc = 0x2F91ACu;
label_2f91ac:
    // 0x2f91ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F91ACu;
    {
        const bool branch_taken_0x2f91ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91ACu;
        // 0x2f91b0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91ac) {
            ctx->pc = 0x2F91C4u;
            goto label_2f91c4;
        }
    }
    ctx->pc = 0x2F91B4u;
    // 0x2f91b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F91B4u;
    {
        const bool branch_taken_0x2f91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91B4u;
        // 0x2f91b8: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91b4) {
            ctx->pc = 0x2F91F0u;
            goto label_2f91f0;
        }
    }
    ctx->pc = 0x2F91BCu;
label_2f91bc:
    // 0x2f91bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F91BCu;
    {
        const bool branch_taken_0x2f91bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91bc) {
            ctx->pc = 0x2F91ECu;
            goto label_2f91ec;
        }
    }
    ctx->pc = 0x2F91C4u;
label_2f91c4:
    // 0x2f91c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f91c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91c8: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2f91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x2f91cc: 0x0  nop
    ctx->pc = 0x2f91ccu;
    // NOP
label_2f91d0:
    // 0x2f91d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f91d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F91D4u;
    {
        const bool branch_taken_0x2f91d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91D4u;
        // 0x2f91d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91d4) {
            ctx->pc = 0x2F91BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f91bc;
        }
    }
    ctx->pc = 0x2F91DCu;
    // 0x2f91dc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f91dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f91e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F91E0u;
    {
        const bool branch_taken_0x2f91e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91E0u;
        // 0x2f91e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91e0) {
            ctx->pc = 0x2F91D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f91d0;
        }
    }
    ctx->pc = 0x2F91E8u;
    // 0x2f91e8: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x2f91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2f91ec:
    // 0x2f91ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2f91f0:
    // 0x2f91f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2f91f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f91f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f91f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f91f8: 0x0  nop
    ctx->pc = 0x2f91f8u;
    // NOP
    // 0x2f91fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F91FCu;
    {
        const bool branch_taken_0x2f91fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91FCu;
        // 0x2f9200: 0x8ce201e4  lw          $v0, 0x1E4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91fc) {
            ctx->pc = 0x2F9208u;
            goto label_2f9208;
        }
    }
    ctx->pc = 0x2F9204u;
    // 0x2f9204: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f9204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f9208:
    // 0x2f9208: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F9208u;
    {
        const bool branch_taken_0x2f9208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9208) {
            ctx->pc = 0x2F920Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9208u;
            // 0x2f920c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F923Cu;
            goto label_2f923c;
        }
    }
    ctx->pc = 0x2F9210u;
    // 0x2f9210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9214: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2f9214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2f9218:
    // 0x2f9218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f921c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F921Cu;
    {
        const bool branch_taken_0x2f921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f921c) {
            ctx->pc = 0x2F9220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F921Cu;
            // 0x2f9220: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F923Cu;
            goto label_2f923c;
        }
    }
    ctx->pc = 0x2F9224u;
    // 0x2f9224: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f9224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f9228: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f9228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f922c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F922Cu;
    {
        const bool branch_taken_0x2f922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F922Cu;
        // 0x2f9230: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f922c) {
            ctx->pc = 0x2F9218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9218;
        }
    }
    ctx->pc = 0x2F9234u;
    // 0x2f9234: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x2f9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x2f9238: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2f9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f923c:
    // 0x2f923c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2f923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2f9240: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f9240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2f9244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9248: 0x0  nop
    ctx->pc = 0x2f9248u;
    // NOP
    // 0x2f924c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f924cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9250: 0x0  nop
    ctx->pc = 0x2f9250u;
    // NOP
    // 0x2f9254: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9254u;
    {
        const bool branch_taken_0x2f9254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9254u;
        // 0x2f9258: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9254) {
            ctx->pc = 0x2F9274u;
            goto label_2f9274;
        }
    }
    ctx->pc = 0x2F925Cu;
    // 0x2f925c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2f925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2f9260: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2f9260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x2f9264: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f9264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9268: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f9268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f926c: 0xc046642  jal         func_119908
    ctx->pc = 0x2F926Cu;
    SET_GPR_U32(ctx, 31, 0x2F9274u);
    ctx->pc = 0x2F9270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F926Cu;
    // 0x2f9270: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2F926Cu, 0x2F9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9274u;
label_2f9274:
    // 0x2f9274: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x2f9274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f9278: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2f927c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F927Cu;
    {
        const bool branch_taken_0x2f927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f927c) {
            ctx->pc = 0x2F9280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F927Cu;
            // 0x2f9280: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92B4u;
            goto label_2f92b4;
        }
    }
    ctx->pc = 0x2F9284u;
    // 0x2f9284: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9288: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2f9288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x2f928c: 0x0  nop
    ctx->pc = 0x2f928cu;
    // NOP
label_2f9290:
    // 0x2f9290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9294: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9294u;
    {
        const bool branch_taken_0x2f9294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9294) {
            ctx->pc = 0x2F9298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9294u;
            // 0x2f9298: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92B4u;
            goto label_2f92b4;
        }
    }
    ctx->pc = 0x2F929Cu;
    // 0x2f929c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f92a0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f92a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f92a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F92A4u;
    {
        const bool branch_taken_0x2f92a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92A4u;
        // 0x2f92a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92a4) {
            ctx->pc = 0x2F9290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9290;
        }
    }
    ctx->pc = 0x2F92ACu;
    // 0x2f92ac: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x2f92acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x2f92b0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2f92b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f92b4:
    // 0x2f92b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2f92b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f92b8: 0x0  nop
    ctx->pc = 0x2f92b8u;
    // NOP
    // 0x2f92bc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2F92BCu;
    {
        const bool branch_taken_0x2f92bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f92bc) {
            ctx->pc = 0x2F92C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F92BCu;
            // 0x2f92c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92F8u;
            goto label_2f92f8;
        }
    }
    ctx->pc = 0x2F92C4u;
    // 0x2f92c4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2f92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f92c8: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x2f92c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f92cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f92d0: 0xc0bfd7c  jal         func_2FF5F0
    ctx->pc = 0x2F92D0u;
    SET_GPR_U32(ctx, 31, 0x2F92D8u);
    ctx->pc = 0x2F92D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92D0u;
    // 0x2f92d4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF5F0u, 0x2F92D0u, 0x2F92D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92D8u;
label_2f92d8:
    // 0x2f92d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F92D8u;
    {
        const bool branch_taken_0x2f92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92D8u;
        // 0x2f92dc: 0xa20011bc  sb          $zero, 0x11BC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4540), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92d8) {
            ctx->pc = 0x2F92F4u;
            goto label_2f92f4;
        }
    }
    ctx->pc = 0x2F92E0u;
label_2f92e0:
    // 0x2f92e0: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x2F92E0u;
    SET_GPR_U32(ctx, 31, 0x2F92E8u);
    ctx->pc = 0x2F92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92E0u;
    // 0x2f92e4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2F92E0u, 0x2F92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92E8u;
label_2f92e8:
    // 0x2f92e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F92E8u;
    {
        const bool branch_taken_0x2f92e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92E8u;
        // 0x2f92ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92e8) {
            ctx->pc = 0x2F92F8u;
            goto label_2f92f8;
        }
    }
    ctx->pc = 0x2F92F0u;
label_2f92f0:
    // 0x2f92f0: 0xa20011bc  sb          $zero, 0x11BC($s0)
    ctx->pc = 0x2f92f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4540), (uint8_t)GPR_U32(ctx, 0));
label_2f92f4:
    // 0x2f92f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f92f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f92f8:
    // 0x2f92f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f92f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f92fc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f92fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f9300: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9300u;
        // 0x2f9304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9308u;
    // 0x2f9308: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2f9308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f930c: 0x0  nop
    ctx->pc = 0x2f930cu;
    // NOP
    ctx->pc = 0x2f9310u;
}
