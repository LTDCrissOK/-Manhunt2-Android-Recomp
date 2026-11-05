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

// Function: sub_00230230
// Address: 0x230230 - 0x2304e8
void sub_00230230_0x230230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230230_0x230230");
#endif

    switch (ctx->pc) {
        case 0x230294u: goto label_230294;
        case 0x2302d8u: goto label_2302d8;
        case 0x2302e8u: goto label_2302e8;
        case 0x230378u: goto label_230378;
        case 0x23039cu: goto label_23039c;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303e8u: goto label_2303e8;
        case 0x230418u: goto label_230418;
        case 0x230494u: goto label_230494;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304ccu: goto label_2304cc;
        default: break;
    }

    ctx->pc = 0x230230u;

    // 0x230230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230234: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x230234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x230238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23023c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230248: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x230248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23024c: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x23024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x230250: 0x8e05036c  lw          $a1, 0x36C($s0)
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x230254: 0x3863000e  xori        $v1, $v1, 0xE
    ctx->pc = 0x230254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
    // 0x230258: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x230258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23025c: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x230260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23025Cu;
        // 0x230260: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23025c) {
            ctx->pc = 0x23029Cu;
            goto label_23029c;
        }
    }
    ctx->pc = 0x230264u;
    // 0x230264: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x230268: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x230268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x23026c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23026Cu;
    {
        const bool branch_taken_0x23026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23026c) {
            ctx->pc = 0x230270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23026Cu;
            // 0x230270: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2302A0u;
            goto label_2302a0;
        }
    }
    ctx->pc = 0x230274u;
    // 0x230274: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x230274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x230278: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x23027c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x230280: 0x10640092  beq         $v1, $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x230280u;
    {
        const bool branch_taken_0x230280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x230284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230280u;
        // 0x230284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230280) {
            ctx->pc = 0x2304CCu;
            goto label_2304cc;
        }
    }
    ctx->pc = 0x230288u;
    // 0x230288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23028c: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x23028Cu;
    SET_GPR_U32(ctx, 31, 0x230294u);
    ctx->pc = 0x230290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23028Cu;
    // 0x230290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x23028Cu, 0x230294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230294u;
label_230294:
    // 0x230294: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x230294u;
    {
        const bool branch_taken_0x230294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230294u;
        // 0x230298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230294) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x23029Cu;
label_23029c:
    // 0x23029c: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x23029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2302a0:
    // 0x2302a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2302a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2302a4: 0x0  nop
    ctx->pc = 0x2302a4u;
    // NOP
    // 0x2302a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2302a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2302ac: 0x0  nop
    ctx->pc = 0x2302acu;
    // NOP
    // 0x2302b0: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x2302B0u;
    {
        const bool branch_taken_0x2302b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302B0u;
        // 0x2302b4: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302b0) {
            ctx->pc = 0x2303B8u;
            goto label_2303b8;
        }
    }
    ctx->pc = 0x2302B8u;
    // 0x2302b8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2302bc: 0x2442ffcc  addiu       $v0, $v0, -0x34
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
    // 0x2302c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2302c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2302c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2302C4u;
    {
        const bool branch_taken_0x2302c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302C4u;
        // 0x2302c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302c4) {
            ctx->pc = 0x2302E8u;
            goto label_2302e8;
        }
    }
    ctx->pc = 0x2302CCu;
    // 0x2302cc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2302ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2302d0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2302D0u;
    SET_GPR_U32(ctx, 31, 0x2302D8u);
    ctx->pc = 0x2302D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302D0u;
    // 0x2302d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2302D0u, 0x2302D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302D8u;
label_2302d8:
    // 0x2302d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2302d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2302e0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2302E0u;
    SET_GPR_U32(ctx, 31, 0x2302E8u);
    ctx->pc = 0x2302E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302E0u;
    // 0x2302e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2302E0u, 0x2302E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302E8u;
label_2302e8:
    // 0x2302e8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2302ec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2302ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2302f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2302f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2302f4: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2302F4u;
    {
        const bool branch_taken_0x2302f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2302f4) {
            ctx->pc = 0x230380u;
            goto label_230380;
        }
    }
    ctx->pc = 0x2302FCu;
    // 0x2302fc: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x2302fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230300: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x230300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230304: 0x0  nop
    ctx->pc = 0x230304u;
    // NOP
    // 0x230308: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x230308u;
    {
        const bool branch_taken_0x230308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230308) {
            ctx->pc = 0x230410u;
            goto label_230410;
        }
    }
    ctx->pc = 0x230310u;
    // 0x230310: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x230314: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x230314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x230318: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x230318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23031c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23031Cu;
    {
        const bool branch_taken_0x23031c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23031Cu;
        // 0x230320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23031c) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230324u;
    // 0x230324: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x230328: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230328u;
    {
        const bool branch_taken_0x230328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230328u;
        // 0x23032c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230328) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230330u;
    // 0x230330: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230330u;
    {
        const bool branch_taken_0x230330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230330u;
        // 0x230334: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230330) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230338u;
    // 0x230338: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230338u;
    {
        const bool branch_taken_0x230338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230338u;
        // 0x23033c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230338) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230340u;
    // 0x230340: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230340u;
    {
        const bool branch_taken_0x230340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230340u;
        // 0x230344: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230340) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230348u;
    // 0x230348: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x230348u;
    {
        const bool branch_taken_0x230348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x230348) {
            ctx->pc = 0x230354u;
            goto label_230354;
        }
    }
    ctx->pc = 0x230350u;
label_230350:
    // 0x230350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230354:
    // 0x230354: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230354u;
    {
        const bool branch_taken_0x230354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x230358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230354u;
        // 0x230358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230354) {
            ctx->pc = 0x230370u;
            goto label_230370;
        }
    }
    ctx->pc = 0x23035Cu;
    // 0x23035c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x230360: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x230364: 0x5462005a  bnel        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x230364u;
    {
        const bool branch_taken_0x230364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230364) {
            ctx->pc = 0x230368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230364u;
            // 0x230368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x23036Cu;
    // 0x23036c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230370:
    // 0x230370: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x230370u;
    SET_GPR_U32(ctx, 31, 0x230378u);
    ctx->pc = 0x230374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230370u;
    // 0x230374: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x230370u, 0x230378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230378u;
label_230378:
    // 0x230378: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x230378u;
    {
        const bool branch_taken_0x230378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230378u;
        // 0x23037c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230378) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x230380u;
label_230380:
    // 0x230380: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x230384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230388: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230388u;
    {
        const bool branch_taken_0x230388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230388u;
        // 0x23038c: 0xe60004f8  swc1        $f0, 0x4F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230388) {
            ctx->pc = 0x2303A4u;
            goto label_2303a4;
        }
    }
    ctx->pc = 0x230390u;
    // 0x230390: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x230394: 0xc069c24  jal         func_1A7090
    ctx->pc = 0x230394u;
    SET_GPR_U32(ctx, 31, 0x23039Cu);
    ctx->pc = 0x230398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230394u;
    // 0x230398: 0x240507a7  addiu       $a1, $zero, 0x7A7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7090u, 0x230394u, 0x23039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23039Cu;
label_23039c:
    // 0x23039c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23039Cu;
    {
        const bool branch_taken_0x23039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23039Cu;
        // 0x2303a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23039c) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x2303A4u;
label_2303a4:
    // 0x2303a4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2303a8: 0xc069c24  jal         func_1A7090
    ctx->pc = 0x2303A8u;
    SET_GPR_U32(ctx, 31, 0x2303B0u);
    ctx->pc = 0x2303ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303A8u;
    // 0x2303ac: 0x240507a5  addiu       $a1, $zero, 0x7A5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1957));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7090u, 0x2303A8u, 0x2303B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303B0u;
label_2303b0:
    // 0x2303b0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2303B0u;
    {
        const bool branch_taken_0x2303b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B0u;
        // 0x2303b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303b0) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x2303B8u;
label_2303b8:
    // 0x2303b8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2303b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2303bc: 0x2442ffcc  addiu       $v0, $v0, -0x34
    ctx->pc = 0x2303bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
    // 0x2303c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2303c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2303c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2303C4u;
    {
        const bool branch_taken_0x2303c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303C4u;
        // 0x2303c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303c4) {
            ctx->pc = 0x2303E8u;
            goto label_2303e8;
        }
    }
    ctx->pc = 0x2303CCu;
    // 0x2303cc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2303d0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2303D0u;
    SET_GPR_U32(ctx, 31, 0x2303D8u);
    ctx->pc = 0x2303D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303D0u;
    // 0x2303d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2303D0u, 0x2303D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303D8u;
label_2303d8:
    // 0x2303d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2303d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2303dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2303e0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2303E0u;
    SET_GPR_U32(ctx, 31, 0x2303E8u);
    ctx->pc = 0x2303E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303E0u;
    // 0x2303e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2303E0u, 0x2303E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303E8u;
label_2303e8:
    // 0x2303e8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2303e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2303ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2303ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2303f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2303f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2303f4: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2303F4u;
    {
        const bool branch_taken_0x2303f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2303f4) {
            ctx->pc = 0x23049Cu;
            goto label_23049c;
        }
    }
    ctx->pc = 0x2303FCu;
    // 0x2303fc: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x2303fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230400: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x230400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230404: 0x0  nop
    ctx->pc = 0x230404u;
    // NOP
    // 0x230408: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x230408u;
    {
        const bool branch_taken_0x230408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230408) {
            ctx->pc = 0x23040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230408u;
            // 0x23040c: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230430u;
            goto label_230430;
        }
    }
    ctx->pc = 0x230410u;
label_230410:
    // 0x230410: 0xc08c02e  jal         func_2300B8
    ctx->pc = 0x230410u;
    SET_GPR_U32(ctx, 31, 0x230418u);
    ctx->pc = 0x230414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230410u;
    // 0x230414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x230410u, 0x230418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230418u;
label_230418:
    // 0x230418: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x23041c: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x23041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230420: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x230420u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230424: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230428: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x230428u;
    {
        const bool branch_taken_0x230428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230428u;
        // 0x23042c: 0xe60004f8  swc1        $f0, 0x4F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230428) {
            ctx->pc = 0x2304CCu;
            goto label_2304cc;
        }
    }
    ctx->pc = 0x230430u;
label_230430:
    // 0x230430: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x230430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x230434: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x230434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230438: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x230438u;
    {
        const bool branch_taken_0x230438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230438u;
        // 0x23043c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230438) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x230440u;
    // 0x230440: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x230444: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230444u;
    {
        const bool branch_taken_0x230444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230444u;
        // 0x230448: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230444) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x23044Cu;
    // 0x23044c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23044Cu;
    {
        const bool branch_taken_0x23044c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23044Cu;
        // 0x230450: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23044c) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x230454u;
    // 0x230454: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230454u;
    {
        const bool branch_taken_0x230454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230454u;
        // 0x230458: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230454) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x23045Cu;
    // 0x23045c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23045Cu;
    {
        const bool branch_taken_0x23045c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23045Cu;
        // 0x230460: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23045c) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x230464u;
    // 0x230464: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x230464u;
    {
        const bool branch_taken_0x230464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x230464) {
            ctx->pc = 0x230470u;
            goto label_230470;
        }
    }
    ctx->pc = 0x23046Cu;
label_23046c:
    // 0x23046c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230470:
    // 0x230470: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230470u;
    {
        const bool branch_taken_0x230470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x230474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230470u;
        // 0x230474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230470) {
            ctx->pc = 0x23048Cu;
            goto label_23048c;
        }
    }
    ctx->pc = 0x230478u;
    // 0x230478: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x230478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x23047c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x23047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x230480: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x230480u;
    {
        const bool branch_taken_0x230480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230480) {
            ctx->pc = 0x230484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230480u;
            // 0x230484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x230488u;
    // 0x230488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23048c:
    // 0x23048c: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x23048Cu;
    SET_GPR_U32(ctx, 31, 0x230494u);
    ctx->pc = 0x230490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23048Cu;
    // 0x230490: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x23048Cu, 0x230494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230494u;
label_230494:
    // 0x230494: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x230494u;
    {
        const bool branch_taken_0x230494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230494u;
        // 0x230498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230494) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x23049Cu;
label_23049c:
    // 0x23049c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2304a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2304a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2304a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2304A4u;
    {
        const bool branch_taken_0x2304a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304A4u;
        // 0x2304a8: 0xe60004f8  swc1        $f0, 0x4F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304a4) {
            ctx->pc = 0x2304C0u;
            goto label_2304c0;
        }
    }
    ctx->pc = 0x2304ACu;
    // 0x2304ac: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2304b0: 0xc069c24  jal         func_1A7090
    ctx->pc = 0x2304B0u;
    SET_GPR_U32(ctx, 31, 0x2304B8u);
    ctx->pc = 0x2304B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304B0u;
    // 0x2304b4: 0x240507a6  addiu       $a1, $zero, 0x7A6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1958));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7090u, 0x2304B0u, 0x2304B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304B8u;
label_2304b8:
    // 0x2304b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2304B8u;
    {
        const bool branch_taken_0x2304b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304B8u;
        // 0x2304bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304b8) {
            ctx->pc = 0x2304D0u;
            goto label_2304d0;
        }
    }
    ctx->pc = 0x2304C0u;
label_2304c0:
    // 0x2304c0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2304c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2304c4: 0xc069c24  jal         func_1A7090
    ctx->pc = 0x2304C4u;
    SET_GPR_U32(ctx, 31, 0x2304CCu);
    ctx->pc = 0x2304C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304C4u;
    // 0x2304c8: 0x240507a4  addiu       $a1, $zero, 0x7A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1956));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7090u, 0x2304C4u, 0x2304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304CCu;
label_2304cc:
    // 0x2304cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2304ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2304d0:
    // 0x2304d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2304d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2304d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2304d8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2304d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2304dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2304DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2304E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304DCu;
        // 0x2304e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2304DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2304E4u;
    // 0x2304e4: 0x0  nop
    ctx->pc = 0x2304e4u;
    // NOP
    ctx->pc = 0x2304e8u;
}
