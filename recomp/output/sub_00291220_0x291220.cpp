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

// Function: sub_00291220
// Address: 0x291220 - 0x291380
void sub_00291220_0x291220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291220_0x291220");
#endif

    switch (ctx->pc) {
        case 0x291258u: goto label_291258;
        case 0x291270u: goto label_291270;
        case 0x291294u: goto label_291294;
        case 0x2912acu: goto label_2912ac;
        case 0x2912c0u: goto label_2912c0;
        case 0x2912d4u: goto label_2912d4;
        case 0x2912e0u: goto label_2912e0;
        case 0x2912f4u: goto label_2912f4;
        default: break;
    }

    ctx->pc = 0x291220u;

    // 0x291220: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x291220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
    // 0x291224: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x291224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x291228: 0xffb308d8  sd          $s3, 0x8D8($sp)
    ctx->pc = 0x291228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2264), GPR_U64(ctx, 19));
    // 0x29122c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291230: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x291230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291234: 0xffb008c0  sd          $s0, 0x8C0($sp)
    ctx->pc = 0x291234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2240), GPR_U64(ctx, 16));
    // 0x291238: 0xffb108c8  sd          $s1, 0x8C8($sp)
    ctx->pc = 0x291238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2248), GPR_U64(ctx, 17));
    // 0x29123c: 0xffb208d0  sd          $s2, 0x8D0($sp)
    ctx->pc = 0x29123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 18));
    // 0x291240: 0xffb408e0  sd          $s4, 0x8E0($sp)
    ctx->pc = 0x291240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2272), GPR_U64(ctx, 20));
    // 0x291244: 0xe7b508f8  swc1        $f21, 0x8F8($sp)
    ctx->pc = 0x291244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2296), bits); }
    // 0x291248: 0xe7b408f0  swc1        $f20, 0x8F0($sp)
    ctx->pc = 0x291248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2288), bits); }
    // 0x29124c: 0xffbf08e8  sd          $ra, 0x8E8($sp)
    ctx->pc = 0x29124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2280), GPR_U64(ctx, 31));
    // 0x291250: 0xc0a4354  jal         func_290D50
    ctx->pc = 0x291250u;
    SET_GPR_U32(ctx, 31, 0x291258u);
    ctx->pc = 0x291254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291250u;
    // 0x291254: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290D50u, 0x291250u, 0x291258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291258u;
label_291258:
    // 0x291258: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x291258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29125c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x29125cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x291260: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x291260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x291264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291268: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x291268u;
    SET_GPR_U32(ctx, 31, 0x291270u);
    ctx->pc = 0x29126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291268u;
    // 0x29126c: 0x2484a8a0  addiu       $a0, $a0, -0x5760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x291268u, 0x291270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291270u;
label_291270:
    // 0x291270: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x291270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291274: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x291274u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x291278: 0x27b00800  addiu       $s0, $sp, 0x800
    ctx->pc = 0x291278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x29127c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29127cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x291280: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x291280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291288: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29128c: 0xc0a43bc  jal         func_290EF0
    ctx->pc = 0x29128Cu;
    SET_GPR_U32(ctx, 31, 0x291294u);
    ctx->pc = 0x291290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29128Cu;
    // 0x291290: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EF0u, 0x29128Cu, 0x291294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291294u;
label_291294:
    // 0x291294: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x291294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29129c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2912a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912a4: 0xc0a441a  jal         func_291068
    ctx->pc = 0x2912A4u;
    SET_GPR_U32(ctx, 31, 0x2912ACu);
    ctx->pc = 0x2912A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912A4u;
    // 0x2912a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291068u, 0x2912A4u, 0x2912ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912ACu;
label_2912ac:
    // 0x2912ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2912acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2912b0: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x2912b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
    // 0x2912b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2912b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912b8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2912B8u;
    SET_GPR_U32(ctx, 31, 0x2912C0u);
    ctx->pc = 0x2912BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912B8u;
    // 0x2912bc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2912B8u, 0x2912C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912C0u;
label_2912c0:
    // 0x2912c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2912c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2912c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2912c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2912c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912cc: 0xc0a444e  jal         func_291138
    ctx->pc = 0x2912CCu;
    SET_GPR_U32(ctx, 31, 0x2912D4u);
    ctx->pc = 0x2912D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912CCu;
    // 0x2912d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291138u, 0x2912CCu, 0x2912D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912D4u;
label_2912d4:
    // 0x2912d4: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2912D4u;
    {
        const bool branch_taken_0x2912d4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2912D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912D4u;
        // 0x2912d8: 0xe7a008a4  swc1        $f0, 0x8A4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912d4) {
            ctx->pc = 0x29131Cu;
            goto label_29131c;
        }
    }
    ctx->pc = 0x2912DCu;
    // 0x2912dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2912dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2912e0:
    // 0x2912e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2912e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2912e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2912e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912ec: 0xc0a43fc  jal         func_290FF0
    ctx->pc = 0x2912ECu;
    SET_GPR_U32(ctx, 31, 0x2912F4u);
    ctx->pc = 0x2912F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912ECu;
    // 0x2912f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x2912ECu, 0x2912F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912F4u;
label_2912f4:
    // 0x2912f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2912f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2912f8: 0xc7a008a0  lwc1        $f0, 0x8A0($sp)
    ctx->pc = 0x2912f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2912fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291300: 0x0  nop
    ctx->pc = 0x291300u;
    // NOP
    // 0x291304: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291304u;
    {
        const bool branch_taken_0x291304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291304) {
            ctx->pc = 0x291308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291304u;
            // 0x291308: 0xe7a108a0  swc1        $f1, 0x8A0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2208), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29130Cu;
            goto label_29130c;
        }
    }
    ctx->pc = 0x29130Cu;
label_29130c:
    // 0x29130c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29130cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x291310: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x291310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x291314: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x291314u;
    {
        const bool branch_taken_0x291314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291314u;
        // 0x291318: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291314) {
            ctx->pc = 0x2912E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2912e0;
        }
    }
    ctx->pc = 0x29131Cu;
label_29131c:
    // 0x29131c: 0x6ba208a7  ldl         $v0, 0x8A7($sp)
    ctx->pc = 0x29131cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x291320: 0x6fa208a0  ldr         $v0, 0x8A0($sp)
    ctx->pc = 0x291320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x291324: 0xb3a208b7  sdl         $v0, 0x8B7($sp)
    ctx->pc = 0x291324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x291328: 0xb7a208b0  sdr         $v0, 0x8B0($sp)
    ctx->pc = 0x291328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29132c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29132cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291330: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x291330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x291334: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x291334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291338: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x291338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29133c: 0xdfb008c0  ld          $s0, 0x8C0($sp)
    ctx->pc = 0x29133cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2240)));
    // 0x291340: 0x9fa508b0  lwu         $a1, 0x8B0($sp)
    ctx->pc = 0x291340u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x291344: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x291344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x291348: 0x9fa308b4  lwu         $v1, 0x8B4($sp)
    ctx->pc = 0x291348u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 2228)));
    // 0x29134c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x291350: 0xdfb108c8  ld          $s1, 0x8C8($sp)
    ctx->pc = 0x291350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2248)));
    // 0x291354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291358: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29135c: 0xdfb208d0  ld          $s2, 0x8D0($sp)
    ctx->pc = 0x29135cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x291360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x291364: 0xdfb308d8  ld          $s3, 0x8D8($sp)
    ctx->pc = 0x291364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2264)));
    // 0x291368: 0xdfb408e0  ld          $s4, 0x8E0($sp)
    ctx->pc = 0x291368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2272)));
    // 0x29136c: 0xdfbf08e8  ld          $ra, 0x8E8($sp)
    ctx->pc = 0x29136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2280)));
    // 0x291370: 0xc7b508f8  lwc1        $f21, 0x8F8($sp)
    ctx->pc = 0x291370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x291374: 0xc7b408f0  lwc1        $f20, 0x8F0($sp)
    ctx->pc = 0x291374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291378: 0x3e00008  jr          $ra
    ctx->pc = 0x291378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291378u;
        // 0x29137c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291380u;
}
